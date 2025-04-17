/*
Escreva um programa que leia dois valores inteiros e efetue a adição.
Caso o valor somado seja maior que 20, este deverá ser apresentado
somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20,
este deverá ser apresentado subtraindo-se 5.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    if ((num1 + num2) > 20)
    {
        printf("%d", (num1 + num2) + 8);
    }
    else
    {
        printf("%d", (num1 + num2) - 5);
    }
    return 0;
}