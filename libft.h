
#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

struct Data
{
    int dia;
    int ano;
    char *mes;
};

size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t size);

void *ft_memset(void *s, int c, size_t n);
void * ft_calloc(size_t num, size_t size);

char *ft_strrchr(const char *s, int c);
char *ft_strchr(const char *s, int c);
char *ft_strnstr(const char *big, const char *litte, size_t len);

#endif