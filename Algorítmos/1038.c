/*
Com base na tabela abaixo, escreva um programa que leia o código de um item
e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

O arquivo de entrada contém dois valores inteiros correspondentes ao código
e à quantidade de um item conforme tabela acima.

O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago,
com 2 casas após o ponto decimal.
*/

#include <stdio.h>
 
int main()
{
    int codigo, quantidade;
    double valor;

    scanf("%d", &codigo);
    scanf("%d", &quantidade);

    if (codigo == 1)
    {
        valor = quantidade*4.0;
        printf("Total: R$ %.2f\n", valor);
    }
    else if (codigo == 2)
    {
        valor = quantidade*4.5;
        printf("Total: R$ %.2f\n", valor);
    }
    else if (codigo == 3)
    {
        valor = quantidade*5.0;
        printf("Total: R$ %.2f\n", valor);
    }
    else if (codigo == 4)
    {
        valor = quantidade*2.0;
        printf("Total: R$ %.2f\n", valor);
    }
    else
    {
        valor = quantidade*1.5;
        printf("Total: R$ %.2f\n", valor);
    }
    return 0;
}