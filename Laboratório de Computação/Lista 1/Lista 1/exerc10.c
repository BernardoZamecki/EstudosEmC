/*
Faça um programa em C que leia três números reais e calcule a média aritmética destes números.
Ao final, o programa deve imprimir o resultado do cálculo.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    float media;
    
    printf("Digite o primeiro número para calcular a média: ");
    scanf("%d", &num1);
    printf("Agora digite o segundo número para calcular a média: ");
    scanf("%d", &num2);
    printf("E por último, digite o primeiro número para calcular a média: ");
    scanf("%d", &num3);
    
    media = (num1+num2+num3)/3;
    
    printf("Sua média é: %f", media);
    
    return 0;
}