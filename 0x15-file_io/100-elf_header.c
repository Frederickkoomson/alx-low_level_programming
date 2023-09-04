#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * error_exit - Prints an error message to stderr and exits with the specified exit code.
 * @exit_code: The exit code to use.
 * @message: The error message to print.
 */
void error_exit(int exit_code, const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(exit_code);
}

/**
 * print_elf_header - Displays the information contained in the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("Class:                             %s\n",
	       header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              %s\n",
	       header->e_ident[EI_DATA] == ELFDATA2LSB ?
	       "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n",
	       header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %s\n",
	       header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("ABI Version:                       %d\n",
	       header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %s\n",
	       header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		error_exit(98, "Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit(98, "Error: Can't open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		error_exit(98, "Error: Can't read file");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
		error_exit(98, "Error: Not an ELF file");

	print_elf_header(&header);

	close(fd);

	return (0);
}
