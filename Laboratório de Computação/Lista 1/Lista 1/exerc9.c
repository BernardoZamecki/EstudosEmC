/*
Faça um programa em C que leia um número real e imprima ¼ deste número.
*/
#include <stdio.h>

int main()
{
    float num1, num025;
    
    printf("Digite um número, e darei 1/4 de seu valor: ");
    scanf("%f", &num1);
    
    num025 = num1/4;
    printf("Eis o seu número: %f", num025);
    
    return 0;
}