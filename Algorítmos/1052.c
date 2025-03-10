/*
Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado
como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.

A entrada contém um único valor inteiro.

Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira
letra em maiúscula.
*/
#include <stdio.h>
 
int main()
{
    int mes;

    scanf("%d", &mes);

    if (mes == 1)
    {
        printf("January\n");
    }
    if (mes == 2)
    {
        printf("February\n");
    }
    if (mes == 3)
    {
        printf("March\n");
    }
    if (mes == 4)
    {
        printf("April\n");
    }
    if (mes == 5)
    {
        printf("May\n");
    }
    if (mes == 6)
    {
        printf("June\n");
    }
    if (mes == 7)
    {
        printf("July\n");
    }
    if (mes == 8)
    {
        printf("August\n");
    }
    if (mes == 9)
    {
        printf("September\n");
    }
    if (mes == 10)
    {
        printf("October\n");
    }
    if (mes == 11)
    {
        printf("November\n");
    }
    if (mes == 12)
    {
        printf("December\n");
    }
 
    return 0;
}