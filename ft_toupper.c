
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ft_toupper(int c);
int ft_tolower(int c);

char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);

void * ft_memcpy(void * destination, const void * source, unsigned int num);

int main()
{
    char s[] = "Zimbo tower";
    char d[7];
//    printf("%p\n", strrchr(s, 'Z'));
//    printf("%p\n", ft_strchr(s, 'Z'));
//memcpy(d, s, 7);
ft_memcpy(d, s, 4);

  //  printf("%s\n", s);
    printf("%s\n", d);
}

int ft_toupper(int c)
{
    if ((c >= 97) && (c <= 122))
        return c -= 32;
    return c;
}

int ft_tolower(int c)
{
    if ((c >= 65) && (c <= 90))
        return c += 32;
    return c;
}


char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (*(s + i) != '\0')
    {
        if (*(s + i) == (char) c)
            return (char *)(s + i);
        i++;
    }
    return NULL;
}



int ft_strlen(const char *s)
{
    unsigned int i;

    i = 0;
    while(*(s + i))
        i++;
    return (i);
}

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s) - 1;
    while (*(s + i))
    {
        if (*(s + i) == c)
            return (char *)(s + i);
        i--;
    }
    return NULL;
}

void * ft_memcpy ( void * destination, const void * source, unsigned int num )
{
    unsigned char * byte_dest = (unsigned char *) destination;
    const unsigned char * byte_src = (const unsigned char *) source;
//    unsigned char * byte_num = (unsigned char) num;

    unsigned int i = 0;
    while (i < num)
    {
        *(byte_dest + i) = *(byte_src + i);
        i++;
    }
    return destination;
}

//memmove
