#include <stdio.h>
#include <stdlib.h>

/*
int ft_atoi(char *s)
{
    size_t i;

    i = 0;
    if (s == NULL)
        return (0);
    while (*(s + i))
    {
        if ()
    }
}
    

int main() {
  char string[] = "";
  int numero = atoi(string); // numero será 12345

  printf("A string '%s' convertida para inteiro é: %d\n", string, numero);

  char outraString[] = "-123abc";

  int outroNumero = atoi(outraString); // outroNumero será 123

  printf("A string '%s' convertida para inteiro é: %d\n", outraString, outroNumero);
  
  printf("\n%d\n", ('9' - 0));
  return 0;
}


    A função atoi principal incontrada na lib stdlid.h tem as seguintes caracteristicas:
    -> Caso a string desejada tenha na primeira posição um caracter ela retorna 0;
    Ex.: n123kjg    retorna: 0
    -> Se a string possuir na primeira posição um sinal acompanhado por um numero ou uma sequencia de numero, então ela retorna o numero com o sinal que vem antes, apenas se os sinais formem - ou +
    Ex.: -678Tomas  retorna: -678
    -> Se forem dois sinais nas duas sequenciais principais, então ela retorna 0
    Ex.: 
*/

int put
int ft_atoi(const char *nptr)
{
    int i;
    
    i = 0;
    while (*(nptr + i))
    {
        if (*(nptr + i) == '32')
            continue;
        if (*(nptr + i) <= 48 && *(nptr + i) >= 57)
            if (*(nptr + i + 1) <= 48 && *(nptr + i + 1) >= 57)
                return 0;
        if ()

        i++;
    }
    return 1;
}

int main()
{
    //printf("%d\n", ('9' - '0'));  Imprime o valor inteiro do caracter '9'
}


/*
    Ideia:
    Armazenar o valor do primeiro indice que contém o primeiro algarismo da 
*/
