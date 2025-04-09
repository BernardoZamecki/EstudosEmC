/*
Faça um programa em C que imprima a média aritmética entre os números 5, 8, 12.
*/
#include <stdio.h>

int main()
{
    float soma, media;
    
    soma = 5+8+12;
    media = soma/3;
    
    printf("%f", media);
    
    return 0;
}