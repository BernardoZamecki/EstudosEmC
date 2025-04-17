/*
Escreva um programa que leia um número e imprima uma das duas mensagens:
“É múltiplo de 3” ou “Não é múltiplo de 3”.
*/
#include <stdio.h>

int main ()
{
    int num;
    
    scanf("%d", &num);
    
    if (num % 3 == 0)
    {
        printf("É múltiplo de 3");
    }
    else
    {
        printf("Não é múltiplo de 3");
    }
    return 0;
}