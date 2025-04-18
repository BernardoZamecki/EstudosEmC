/*
Escreva um programa que leia um número e imprima uma das mensagens:
“Maior do que 20”, “Igual a 20” ou “Menor do que 20”.
*/
#include <stdio.h>

int main()
{
    float num;
    
    scanf("%f", &num);
    
    if (num > 20)
    {
        printf("Maior que 20");
    }
    else if (num == 20)
    {
        printf("Igual a 20");
    }
    else
    {
        printf("Menor que 20");
    }
    return 0;
}