/*
Escreva um programa que leia um número e informe se ele é divisível por 3 e por 7.
*/
#include <stdio.h>

int main ()
{
    int num;
    
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 7 == 0 )
    {
        printf("É múltiplo de 3 e de 7");
    }
    else
    {
        printf("Não é múltiplo de 3 e de 7");
    }
    return 0;
}