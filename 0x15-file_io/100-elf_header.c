#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/* ELF header struct*/
typedef struct 
{
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint32_t e_entry;
    uint32_t e_phoff;
    uint32_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} ElfHeader;

/** displayElfHeadar -Function to display ELF header information
 * @header: file to display elf information
 * Return - void
*/
void displayElfHeader(ElfHeader *header) 
{
    int i;

    printf("Magic: ");
    for (i = 0; i < 16; i++) {
        printf("%02x", header->e_ident[i]);
        if (i < 15) printf(" ");
    }
    printf("\nClass:                              %s\n", header->e_ident[4] == 1 ? "ELF32" : "ELF64");
    printf("Data:                               %s\n", header->e_ident[5] == 1 ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("Version:                            %d (current)\n", header->e_ident[6]);
    printf("OS/ABI:                             %d\n", header->e_ident[7]);
    printf("ABI Version:                        %d\n", header->e_ident[8]);
    printf("Type:                               0x%04x\n", header->e_type);
    printf("Machine:                            0x%04x\n", header->e_machine);
    printf("Version:                            0x%08x\n", header->e_version);
    printf("Entry point address:                0x%08x\n", header->e_entry);
    printf("Start of program headers:          %lu (bytes into file)\n", (unsigned long)header->e_phoff);
    printf("Start of section headers:          %lu (bytes into file)\n", (unsigned long)header->e_shoff);
    printf("Flags:                             0x%08x\n", header->e_flags);
    printf("Size of this header:               %u (bytes)\n", header->e_ehsize);
    printf("Size of program headers:           %u (bytes)\n", header->e_phentsize);
    printf("Number of program headers:         %u\n", header->e_phnum);
    printf("Size of section headers:           %u (bytes)\n", header->e_shentsize);
    printf("Number of section headers:         %u\n", header->e_shnum);
    printf("Section header string table index: %u\n", header->e_shstrndx);
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

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);

    if (fd == -1) {
        perror("Error opening file");
        return 98;
    }

    /* Read the ELF header */
    if (read(fd, &elfHeader, sizeof(elfHeader)) != sizeof(elfHeader)) {
        perror("Error reading ELF header");
        close(fd);
        return 98;
    }

    /*Check if it's a valid ELF file*/
    if (memcmp(elfHeader.e_ident, "\x7F\x45\x4C\x46", 4) != 0) {
        fprintf(stderr, "Not a valid ELF file: %s\n", filename);
        close(fd);
        return 98;
    }

    /* Display ELF header information*/
    displayElfHeader(&elfHeader);

    close(fd);
    return 0;
}

