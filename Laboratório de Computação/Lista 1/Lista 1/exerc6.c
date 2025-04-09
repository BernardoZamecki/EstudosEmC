/*
Faça um programa em C que leia[1] e imprima um número inteiro.

[1] No contexto dessa lista, “ler” significa criar uma variável e atribuir um valor a ela.
*/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Seu número é: %d", num);
    
    return 0;
}