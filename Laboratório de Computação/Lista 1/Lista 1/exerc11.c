/*
Faça um programa em C que leia dois números reais e calcule as quatro operações
básicas entre estes dois números, adição, subtração, multiplicação e divisão.
Ao final, o programa deve imprimir os resultados dos cálculos.
*/
#include <stdio.h>

int main()
{
    float num1, num2, soma, subtração, multiplicação, divisão;
    
    printf("Digite o seu primeiro numero para calcula-los com as quatro operações: ");
    scanf("%f", &num1);
    printf("Agora o seu segundo número: ");
    scanf("%f", &num2);
    
    soma = num1+num2;
    subtração = num1-num2;
    multiplicação = num1*num2;
    divisão = num1/num2;
    
    printf ("Soma: %f\nSubtração: %f\nMultiplicação: %f\nDivisão: %f", soma, subtração, multiplicação, divisão);
    
    return 0;
}