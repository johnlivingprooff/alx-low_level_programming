#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <string.h>
#include <stdbool.h>

/**
 * isELF - checks if file is an ELF
 * @header: file to be checked
 * Return: boolean value
 */
bool isELF(elf_header *header)
{
	return (header->e_ident[0] == 0x7F && header->e_ident[1] == 'E' &&
			header->e_ident[2] == 'L' && header->e_ident[3] == 'F');
}

/**
 * OS_ABI - finds the appropriate OS/ABI name
 * @osabi: the file being searched
 * Return: the value of the OS/ABI
 */
const char *OS_ABI(uint8_t osabi)
{
	switch (osabi)
	{
		case ELFOSABI_SYSV: return ("UNIX - System V");
		case ELFOSABI_HPUX: return ("UNIX - HP-UX");
		case ELFOSABI_NETBSD: return ("UNIX - NetBSD");
		case ELFOSABI_LINUX: return ("UNIX - Linux");
		case ELFOSABI_SOLARIS: return ("UNIX - Solaris");
		case ELFOSABI_AIX: return ("UNIX - AIX");
		case ELFOSABI_IRIX: return ("UNIX - IRIX");
		case ELFOSABI_FREEBSD: return ("UNIX - FreeBSD");
		case ELFOSABI_TRU64: return ("UNIX - TRU64");
		case ELFOSABI_MODESTO: return ("Novell - Modesto");
		case ELFOSABI_OPENBSD: return ("UNIX - OpenBSD");
		default: return ("Unknown");
	}
}

/**
 * ELFtype - finds the ELF type name
 * @type: the name int
 * Return: the name of the ELF type
 */
const char *ELFtype(uint16_t type)
{
	switch (type)
	{
		case ET_NONE: return ("NONE (No file type)");
		case ET_EXEC: return ("EXEC (Executable file)");
		case ET_REL: return ("REL (Relocatable file)");
		case ET_CORE: return ("CORE (Core file)");
		case ET_DYN: return ("DYN (Shared object file)");
		default: return ("Unknown");
	}
}
/**
 * print_elfFile - prints the details as specified
 * in the Task
 * @elfHeader: the ELF header file
 */
void print_elfFile(elf_header *elfHeader)
{
	int i;
	char little[] = "2's complement, little endian";
	char big[] = "2's complement, big endian";

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elfHeader->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
			(elfHeader->e_ident[4] == 1) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			(elfHeader->e_ident[5] == 1) ? little : big);
	printf("  Version:                           %d (current)\n",
			elfHeader->e_ident[6]);
	printf("  OS/ABI:                            %s\n",
			OS_ABI(elfHeader->e_ident[7]));
	printf("  ABI Version:                       %d\n",
			elfHeader->e_ident[8]);
	printf("  Type:                              %s\n",
			ELFtype(elfHeader->e_type));
	printf("  Entry point address:               0x%08x\n",
			(uint32_t)elfHeader->e_entry);

}

/**
 * main - program that prints a ELF file
 * @ac: argument counter
 * @av: args vector
 * Return: 0 - Success, any other value is a fail
 */
int main(int ac, char **av)
{
	FILE *file;
	elf_header elfHfile;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s <elf_filename>\n", av[0]);
		return (EXIT_FAILURE);
	}

	file = fopen(av[1], "rb");
	if (!file)
	{
		perror("fopen failed"); /* prints to stderr */
		exit(98);
	}

	/* reads the content of file into elfHfile */
	fread(&elfHfile, sizeof(elf_header), 1, file);

	/* check if the file is a valid ELF */
	if (!isELF(&elfHfile))
	{
		perror("Error: Not a valid ELF file");
		fclose(file);
		exit(98);
	}

	fclose(file); /*close the file*/

	print_elfFile(&elfHfile); /* prints the ELF file */

	return (0);
}
