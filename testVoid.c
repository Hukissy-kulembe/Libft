
#include <stdio.h>
#include <string.h>


void *ft_memset(void *s, int c, unsigned int n);
void ft_bzero(void *s, unsigned int n);

int main()
{
    char s[10];
    //ft_memset(s, 6.6, 10);
    //memset(s, '1', 10);
    ft_bzero(s, 10);
    for (int i = 0; i < 10; i++)
        printf("%c\n", s[i]);
}

void *ft_memset(void *s, int c, unsigned int n)
{
    unsigned char *byte_s = (unsigned char *)s;
    unsigned char byte_c = (unsigned char) c;

    int i;

    i = 0;
    while (i < n)
    {
        *(byte_s + i) = byte_c;
        i++;
    }
    return s;
}

void ft_bzero(void *s, unsigned int n)
{
    unsigned char *byte_s = (unsigned char *) s;
    unsigned char byte_n = (unsigned char) n;

    int i;

    i = 0;
    while (i < n)
    {
        *(byte_s + i) = 0;
        i++;
    }
}
