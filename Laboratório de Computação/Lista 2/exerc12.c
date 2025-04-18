/*
Escreva um programa que leia um número e indique se o número está
compreendido entre 20 e 50 ou não.
*/
#include <stdio.h>

int main()
{
    float num;
    
    scanf("%f", &num);
    
    if (num >= 20 && num <= 50)
    {
        printf("%.2f está dentro do intervalo 20 - 50", num);
    }
    else
    {
        printf("%.2f não está dentro do intervalo 20 - 50", num);
    }
    return 0;
}