#include "libft.h"

void * ft_memcpy ( void * destination, const void * source, size_t num )
{
    unsigned char * byte_dest = (unsigned char *) destination;
    const unsigned char * byte_src = (const unsigned char *) source;

    size_t i = 0;
    while (i < num)
    {
        *(byte_dest + i) = *(byte_src + i);
        i++;
    }
    return destination;
}
