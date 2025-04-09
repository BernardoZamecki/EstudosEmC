/*
Ler um valor N. Calcular e escrever seu respectivo fatorial.
Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

A entrada contém um valor inteiro N (0 < N < 13).

A saída contém um valor inteiro, correspondente ao fatorial de N.
*/
#include <stdio.h>

int main()
{
    int num, i, fatorial;

    scanf("%d", &num);

    for (i = 0, fatorial = 1; i < num; i++)
    {
        fatorial = fatorial * (num - i);
    }
    printf("%d\n", fatorial);
    return 0;
}