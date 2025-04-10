/*
Faça um programa em C que leia dois números inteiros e imprima a subtração deles.
*/
#include <stdio.h>

int main()
{
    int num1, num2, subtração;
    
    printf("Digite o primeiro número para a subtração: ");
    scanf("%d", &num1);
    printf("Agora digite o segundo número para a subtração: ");
    scanf("%d", &num2);
    
    subtração = num1 - num2;
    printf("%d - %d = %d", num1, num2, subtração);
    
    return 0;
}