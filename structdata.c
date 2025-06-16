#include "libft.h"
#include <string.h>

int main()
{
    struct Data datas[] = {
        {7, 2000, ""},
        {27, 2005, ""},
        {26, 2010, ""},
        {17, 2002, ""},
        {15, 2015, ""},
        {15, 2021, ""}
    };

    char mes[100];
     
    for (int i = 0; i < 6; i++)
    {
        printf("Quais meses pertencem a está data?\nMês: ");
        fgets(mes, sizeof(mes), stdin);

        datas[i].mes = (char *)ft_calloc(ft_strlen(mes) + 1, sizeof(char));
        if (datas[i].mes == NULL)
        {
            printf("Erro ao alocar memória para o mês.\n");
            return 1;
        } else {
            strcpy(datas[i].mes, mes);
            printf("\n\n");
        }   
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Data %d: %d / %s / %d\n", i + 1, datas[i].dia, datas[i].mes, datas[i].ano);
    }
    for (int i = 0; i < 6; i++)
    {
        free(datas[i].mes);
    }
    return 0;
}