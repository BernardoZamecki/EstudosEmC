/*
Escreva um programa que leia um número e informe se ele é ou não divisível por 5.
*/
#include <stdio.h>

int main()
{
    int num;
    
    scanf("%d", &num);
    
    if (num % 5 == 0)
    {
        printf("%d é divisivel por 5", num);
    }
    else
    {
        printf("%d não é divisivel por 5", num);
    }
    return 0;
}