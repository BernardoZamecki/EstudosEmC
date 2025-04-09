/*
Faça um programa em C que leia dois números reais e os imprima.
*/
#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("Eis os números inseridos: %f, %f", num1, num2);
    
    return 0;
}