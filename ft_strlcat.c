
#include <stdio.h>
#include <string.h>

static size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (*(s + i))
        i++;
    return (i);
}

size_t   ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(dst);
    if (size > 0)
    {
        while (*(src + i) && (i < size))
        {
            *(dst + (len + i - 1)) = *(src + i);
            i++;
        }
        *(dst + i) = '\0';
    }
    return (len + ft_strlen(src));
}