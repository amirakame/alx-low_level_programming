#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * print_elf_header - Displays the information contained in the ELF header
 * at the start of an ELF file.
 * @header: A pointer to the ELF header structure.
 *
 * Return: Void.
 */
void print_elf_header(Elf32_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   %x %x %x %x\n", header->e_ident[EI_MAG0],
			header->e_ident[EI_MAG1], header->e_ident[EI_MAG2],
			header->e_ident[EI_MAG3]);
	printf("  Class:  %26d\n", header->e_ident[EI_CLASS]);
	printf("  Data:   %26d\n", header->e_ident[EI_DATA]);
	printf("  Version:%26d\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI: %26d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:%d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:   %26d\n", header->e_type);
	printf("  Entry point address:               %#x\n", header->e_entry);
}

/**
 * main - Opens an ELF file and prints its header information.
 * @argc: The number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success, otherwise 1.
 */
int main(int argc, char **argv)
{
	Elf32_Ehdr *header;
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		return (1);
	}

	header = malloc(sizeof(Elf32_Ehdr));
	if (header == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		close(fd);
		return (1);
	}

	if (read(fd, header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		free(header);
		close(fd);
		return (1);
	}

	print_elf_header(header);

	free(header);
	close(fd);
	return (0);
}
