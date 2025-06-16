#include "libft.h"

void * ft_calloc(size_t num, size_t size)
{
  void * ptr;

  ptr = malloc(size * num);
  if (ptr != NULL)
    ft_memset(ptr, '\0', size * num);
  return ptr;
}


