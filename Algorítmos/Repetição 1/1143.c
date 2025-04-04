/*
Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade
de linhas de saída que serão apresentadas na execução do programa.

O arquivo de entrada contém um número inteiro positivo N.

Imprima a saída conforme o exemplo fornecido.
*/
#include <stdio.h>

int main()
{
    int num, i;

    scanf("%d", &num);

    for (i = 1; i < num + 1; i++)
    {
        printf("%d %d %d\n", i, (i * i), (i * i * i));
    }
    return 0;

}