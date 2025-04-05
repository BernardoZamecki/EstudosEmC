/*
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição
dentreos 100 valores lidos.

O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.
*/
#include <stdio.h>

int main()
{
    int i, num, numM, posM;

    for (i = 0, numM = 0; i < 100; i++)
    {
        scanf("%d", &num);

        if (num > numM)
        {
            numM = num;
            posM = i + 1;
        }
    }
    printf("%d\n%d\n", numM, posM);
}