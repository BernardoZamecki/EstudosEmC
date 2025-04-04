/*
Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre
eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.

O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não
necessariamente em ordem crescente.

Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.
*/
#include <stdio.h>

int main()
{
    int x, y, i, menor, intervalo;
    
    scanf("%d %d", &x, &y);
    
    if (x > y)
    {
        intervalo = x - y - 1;
        menor = y + 1;
    }
    if (x < y)
    {
        intervalo = y - x - 1;
        menor = x + 1;
    }
    
    for (i = 0; i < intervalo; i++, menor++)
    {
        if (menor % 5 == 2 || menor % 5 == 3)
        {
            printf("%d\n", menor);
        }
    }
    return 0;
    
}