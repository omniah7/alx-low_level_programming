#include <stdio.h>
#include "main.h"
/**
* main - displays the information contained in the ELF header
*           at the start of an ELF file.
* @ac: argument count
* @av: argument vector
* Return: 0
*/
int main(int ac, char **av)
{
	int fd, _close;
	Elf32_Ehdr h;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = check(av[1], &h);
	if (h.e_ident[EI_MAG0] == 0x7f && h.e_ident[EI_MAG1] == 'E'
	&& h.e_ident[EI_MAG2] == 'L' && h.e_ident[EI_MAG3] == 'F')
	{
		printf("ELF Header:\n");
		print_magic(h);
		print_class(h);
		print_data(h);
		print_version(h);
		print_osApi(h);
		print_apiVersion(h);
		print_type(h);
		print_entry(h);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
	_close = close(fd);
	if (_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(98);
	}
	return (0);
}
/**
* check - checks if there is an error in open and read
* @filename: the elf_filename
* @h: the elf header
* Return: fd integer
*/
int check(char *filename, Elf32_Ehdr *h)
{
	int fd, _read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open %s\n", filename);
		exit(98);
	}
	_read = read(fd, h, sizeof(Elf32_Ehdr));
	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", filename);
		exit(98);
	}
	return (fd);
}
/**
* print_entry - displays the Entry point address
* @h: the elf header
*/
void print_entry(Elf32_Ehdr h)
{
	printf("Entry point address: %x\n", h.e_entry);
}
/**
* print_type - displays the Type
* @h: the elf header
*/
void print_type(Elf32_Ehdr h)
{
	printf("Type: ");
	switch (h.e_type)
	{
		case ET_NONE:
			printf("NONE\n");
			break;
		case ET_REL:
			printf("REL\n");
			break;
		case ET_EXEC:
			printf("EXEC\n");
			break;
		case ET_DYN:
			printf("DYN\n");
			break;
		case ET_CORE:
			printf("CORE\n");
			break;
	}
}
/**
* print_apiVersion - displays the ABI Version
* @h: the elf header
*/
void print_apiVersion(Elf32_Ehdr h)
{
	printf("ABI Version: %i\n", h.e_ident[EI_ABIVERSION]);

}
/**
* print_osApi - displays the os/ABI
* @h: the elf header
*/
void print_osApi(Elf32_Ehdr h)
{
		printf("OS/ABI: ");
		switch (h.e_ident[EI_OSABI])
		{
			case ELFOSABI_SYSV:
			printf("UNIX System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded)\n");
			break;
		}
}
/**
* print_version - displays the version
* @h: the elf header
*/
void print_vresion(Elf32_Ehdr h)
{
	printf("Version: %d", h.e_ident[EI_VERSION]);
	if (h.e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
/**
* print_data - displays the data
* @h: the elf header
*/
void print_data(Elf32_Ehdr h)
{
	printf("Data: ");
	if (h.e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little-endian\n");
	else
		printf("2's complement, big-endian\n");
}
/**
* print_class - displays the class
* @h: the elf header
*/
void print_class(Elf32_Ehdr h)
{
	printf("Class: ");
	if (h.e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else
		printf("ELF64\n");
}
/**
* print_magic - displays the magic
* @h: the elf header
*/
void print_magic(Elf32_Ehdr h)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", h.e_ident[i]);
	}
	printf("\n");
}
