/*
Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem
dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100])
este valor se encontra. Obviamente se o valor não estiver em nenhum destes intervalos,
deverá ser impressa a mensagem “Fora de intervalo”.

O símbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000

O arquivo de entrada contém um número com ponto flutuante qualquer.

A saída deve ser uma mensagem conforme exemplo abaixo.
*/

#include <stdio.h>
 
int main()
{
    float num;
    scanf("%f", &num);

    if (num > 100 || num < 0)
    {
        printf("Fora de intervalo\n");
    }

    else if (num > 75)
    {
        printf("Intervalo (75,100]\n", num);
    }

    else if (num > 50)
    {
        printf("Intervalo (50,75]\n", num);
    }

    else if (num > 25)
    {
        printf("Intervalo (25,50]\n", num);
    }

    else {
        printf("Intervalo [0,25]\n");
    }
    return 0;
}