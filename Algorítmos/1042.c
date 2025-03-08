/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem
crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

A entrada contem três números inteiros.

Imprima a saída conforme foi especificado.
*/

#include <stdio.h>
 
int main()
{ 
    int num1, num2, num3;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 == num2 == num3)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num1, num2, num3, num1, num2, num3);
    }
    if (num1 == num2)
    {
        if (num1 > num3)
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num3, num1, num2, num1, num2, num3);
        }
        else
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num1, num2, num3, num1, num2, num3);
        }
    }
    if (num1 == num3)
    {
        if (num1 > num2)
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num2, num1, num3, num1, num2, num3);
        }
        else
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num1, num3, num2, num1, num2, num3);
        }
    }
    if (num2 == num3)
    {
        if (num2 > num1)
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num1, num2, num3, num1, num2, num3);
        }
        else
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num2, num3, num1, num1, num2, num3);
        }
    }
    if (num1 > num2 && num1 > num3)
    {
        if (num2 > num3)
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num3, num2, num1, num1, num2, num3);
        }
        else
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num2, num3, num1, num1, num2, num3);
        }
    }
    if (num2 > num1 && num2 > num3)
    {
        if (num1 > num3)
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num3, num1, num2, num1, num2, num3);
        }
        else
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num1, num3, num2, num1, num2, num3);
        }
    }
    if (num3 > num1 && num3 > num2)
    {
        if (num1 > num2)
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num2, num1, num3, num1, num2, num3);
        }
        else
        {
            printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", num1, num2, num3, num1, num2, num3);
        }
    }
    return 0;
}