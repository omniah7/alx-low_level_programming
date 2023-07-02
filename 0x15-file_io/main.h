#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_magic(Elf32_Ehdr h);
void print_class(Elf32_Ehdr h);
void print_data(Elf32_Ehdr h);
void print_version(Elf32_Ehdr h);
void print_osApi(Elf32_Ehdr h);
void print_apiVersion(Elf32_Ehdr h);
void print_type(Elf32_Ehdr h);
void print_entry(Elf32_Ehdr h);
int check(char *filename, Elf32_Ehdr *h);
void close_files(int fd[]);

#endif
