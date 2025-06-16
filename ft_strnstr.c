#include "libft.h"

/**
 * Busca a localização de uma substrig dentro de uma string,
 * e retorna o endereço da primeira letra da substring na string
 */
char *ft_strnstr(const char *big, const char *litte, size_t len)
{
    size_t i;       // Itera pelo loop principal
    size_t j;       // Itera pela loop secundario, alterando de posições nas string e mantendo o valor da iteração i
    size_t little_len;       // Vai pegando novo valor para verificar se o tamanho da string principal tornou-se menor que o tamanho da substring
    size_t big_len;          // Tamanho da string principal
    
    i = 0;
    big_len = ft_strlen(big);  // Tamanho da string principal
    little_len = ft_strlen(litte);  // Tamanho da substring
    if (little_len == 0)
        return (char *)(big + i);  // Se a substring for vazia, retorna o endereço da primeira letra da string principal
    while (i < len)         // iteração principal
    {
        if (len - i < little_len || big_len < little_len)
            return NULL;
        j = 0;
        while (*(big + (i + j)) == *(litte + j))        // iteração secundaria
        {
            j++;
            if (j == little_len)
                return (char *)(big + i);
        }
        i++;
    }
    return NULL;
}
/*
int main()
{
    char big[] = "Tudo e todos nos estamas bem";
    char little[] = "amas";
    char *ptr = ft_strnstr(big, little, 29);
    printf("A primeira ocorrencia: %c\n", *ptr);
    printf("A primeira ocorrencia: %c\n", ft_strnstr(big, little, 18));
}


   Quando retorna NULL?
   Deve retornar null quando:
   ->   A substring > tamanho desejado a ser pesquisado;
   ->   A substring > a String original;
   ->   A String ou substring for vazia;

   
    A medida que a iteração principal for acrescentando,
    diminua  1 valor no tamanho desejado, faz-se a  verifição do tamanho novamente.
*/