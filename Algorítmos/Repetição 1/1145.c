/*
Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência
de 1 até Y, passando para a próxima linha a cada X números.

O arquivo de entrada contém dois valores inteiros, (1 < X < 20) e (X < Y < 100000).

Cada sequência deve ser impressa em uma linha apenas, com 1 espaço em branco entre
cada número, conforme exemplo abaixo. Não deve haver espaço em branco após o
último valor da linha.
*/
#include <stdio.h>

int main()
{
    int x, y, i, xAux;

    scanf("%d %d", &x, &y);

    xAux = x;

    for (i = 1; i < y + 1; i++)
    {
        if (i == xAux || i == y)
        {
            printf("%d\n", i);
            xAux += x;
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;

}