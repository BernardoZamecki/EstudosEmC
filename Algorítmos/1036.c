/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”,
caso haja uma divisão por 0 ou raiz de numero negativo.

Leia três valores de ponto flutuante (double) A, B e C.

Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular".
Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem
correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, R1, R2;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0 || a == 0) {
        printf("Impossivel calcular\n");
        return 0;
    }

    R1 = (-b + sqrt(delta)) / (a * 2);
    R2 = (-b - sqrt(delta)) / (a * 2);

    printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    return 0;
}