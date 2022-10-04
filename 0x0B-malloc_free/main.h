#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char **strtow(char *str);
int **alloc_grid(int width, int height);

#endif /*MAIN_H*/
