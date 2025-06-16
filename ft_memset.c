#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *byte_s = (unsigned char *)s;
    unsigned char byte_c = (unsigned char) c;

    size_t i;

    i = 0;
    while (i < n)
    {
        *(byte_s + i) = byte_c;
        i++;
    }
    return s;
}
