#include "libft.h"

int main()
{
    int *ptr = (int *) ft_calloc(10, sizeof(int));

    if (!ptr)
    {
        printf("Falha na alocação de memória!");
    } else {
        for (int i = 0; i < 10; i++)
            *(ptr + i) = 0;
        for (int i = 0; i < 10; i++)
            printf("%d%c", *(ptr + i) ,((i < 9) ? ' ' : '\n'));    
    }
}