#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <stdint.h>

/**
 * struct elfHeader - defines the ELF header structure
 * @e_ident: 1
 * @e_type: desc
 * @e_machine: desc
 * @e_version: desc
 * @e_osabi: desc
 * @e_abiversion: desc
 * @e_padding: Padding to align the struct to 64 bits
 * @e_phoff: desc
 * @e_shoff: desc
 * @e_flags: desc
 * @e_ehsize: desc
 * @e_phentsize: desc
 * @e_phnum: desc
 * @e_shentsize: desc
 * @e_shnum: desc
 * @e_shstrndx: desc
 * @e_entry: Entry point address (64-bit for ELFCLASS64)
 *
 * Description: the stucture for each ELF file
 *
 */
typedef struct elfHeader
{
	uint8_t e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint8_t e_osabi;
	uint8_t e_abiversion;
	uint8_t e_padding[7];
	uint16_t e_phoff;
	uint16_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
	uint64_t e_entry; /* Entry point address (64-bit for ELFCLASS64) */
} elf_header;

/* prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
