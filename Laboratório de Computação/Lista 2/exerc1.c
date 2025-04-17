/*
Escreva um programa que leia dois valores numéricos inteiros e efetue sua adição.
O programa deve informar ao usuário se o resultado é maior ou menor que 10.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    if ((num1 + num2) > 10)
    {
        printf("A soma dos dois valores é maior que 10\n");
    }
    else
    {
        printf("A soma dos dois valores é menor que 10\n");
    }
    return 0;
}