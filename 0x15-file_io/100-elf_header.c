#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>

#define BUFFER_SIZE 128
/**
 * error_exit - Entry point
 * @message: string
 * Return: void
 */
void error_exit(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Print elf header info
 * @header: header
 * Return: void
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class:							 %s\n",
			header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:							  %s\n",
			header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version:						   %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("OS/ABI:							%d\n",
			header->e_ident[EI_OSABI]);
	printf("ABI Version:					   %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("Type:							  %d\n", header->e_type);
	printf("Entry point address:			   0x%lx\n", header->e_entry);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		error_exit("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error_exit("Error opening file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		error_exit("Error reading ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
		error_exit("Not an ELF file");
	}

	print_elf_header_info(&header);

	close(fd);
	return (0);
}
