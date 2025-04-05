/*
A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de
Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos
2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N
primeiros números dessa série.

O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Os valores devem ser mostrados na mesma linha, separados por um espaço em branco.
Não deve haver espaço após o último valor.
*/
#include <stdio.h>

int main()
{
    int num, i, numA1, numA2, numImp;

    scanf("%d", &num);

    for (i = 0, numA1 = 0, numA2 = 1; i < num; i++)
    {
        numImp = numA1 + numA2;
        if (num == i + 1)
        {
        printf("%d\n", numA1, numImp);
        numA2 = numA1;
        numA1 = numImp;
        }
        else
        {
            printf("%d ", numA1, numImp);
            numA2 = numA1;
            numA1 = numImp;
        }
    }
    return 0;
}