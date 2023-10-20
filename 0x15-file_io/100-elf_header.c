#include "main.h"

/**
* type - print the type
* @ident: the ELF struct
* @type: data to compare and print.
* Return: Void
*/

void type(unsigned int type, unsigned char *ident)
{
	ident[EI_DATA] == ELFDATA2MSB ? type = type >> 8 : type;

	printf("Type:                              ");
	if (type == ET_NONE)
		printf("NONE (Unknown type)\n");
	else if (type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}

/**
 * osabi - print the osabi
 * @ident: the ELF struct
 * return: no return is a void func.
 */
void osabi(unsigned char *ident)
{
	printf("OS/ABI:                            ");
	if (ident[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", ident[EI_OSABI]);
}

/**
* verify- verify the file to check if is a ELF
* @e_ident: the ELF struct
* return: no return is a void func.
*/

void verify(unsigned char *e_ident)
{
	if (*(e_ident) == 0x7f && *(e_ident + 1) == 'E' &&
	    *(e_ident + 2) == 'L' && *(e_ident + 3) == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
		exit(98);
	}
}

/**
 * displayElfHeader - Function to display ELF header information
 * @header: file to display elf information
 * Return - void
*/
void displayElfHeader(ElfHeader *header)
{
	int i;

	verify(header->ident);
	printf("Magic: ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x", header->ident[i]);
		if (i < 15)
			printf(" ");
	}
	printf("\nClass:                             %s\n",
		header->ident[4] == 1 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", header->ident[5] == 1 ?
		"2's complement, little-endian" : "2's complement, big-endian");
	printf("Version:                           %d (current)\n", header->ident[6]);
	osabi(header->ident);
	printf("ABI Version:                       %d\n", header->ident[8]);
	type(header->type, header->ident);
	printf("Entry point address:               0x%08x\n", header->entry);
}

/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 * the function fails - exit code 98.
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	ElfHeader elfHeader;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	/* Read the ELF header */
	if (read(fd, &elfHeader, sizeof(elfHeader)) != sizeof(elfHeader))
	{
		perror("Error reading ELF header");
		close(fd);
		return (98);
	}

	/*Check if it's a valid ELF file*/
	if (memcmp(elfHeader.ident, "\x7F\x45\x4C\x46", 4) != 0)
	{
		fprintf(stderr, "Not a valid ELF file: %s\n", filename);
		close(fd);
		return (98);
	}

	/* Display ELF header information*/
	displayElfHeader(&elfHeader);

	close(fd);
	return (0);
}

