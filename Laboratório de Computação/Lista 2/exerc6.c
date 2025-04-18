/*
Escreva um programa que leia três números inteiros e imprima os três em ordem crescente.
*/
#include <stdio.h>

int main ()
{
    int num1, num2, num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 >= num2 && num1 >= num3)
    {
        if (num2 >= num3)
        {
            printf("\n%d\n%d\n%d\n", num3, num2, num1);
        }
        else
        {
            printf("\n%d\n%d\n%d\n", num2, num3, num1);
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        if (num1 >= num3)
        {
            printf("\n%d\n%d\n%d\n", num3, num1, num2);
        }
        else
        {
            printf("\n%d\n%d\n%d\n", num1, num3, num2);
        }
    }
    else
    {
        if (num1 >= num2)
        {
            printf("\n%d\n%d\n%d\n", num2, num1, num3);
        }
        else
        {
            printf("\n%d\n%d\n%d\n", num1, num2, num3);
        }
    }
    return 0;
}