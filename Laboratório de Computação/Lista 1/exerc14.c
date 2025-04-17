/*
Faça um programa em C que leia a base e a altura de um retângulo
e imprima o perímetro (base + altura) e a área (base * altura).
*/
#include <stdio.h>

int main()
{
    float altura, base, perimetro, area;
    
    printf("Digite a altura do seu retângulo (cm): ");
    scanf("%f", &altura);
    printf("Digite a base do seu retângulo (cm): ");
    scanf("%f", &base);
    
    perimetro = 2*(altura+base);
    area = altura*base;
    
    printf("Perimetro: %f cm\nÁrea: %f cm", perimetro, area);
    
    return 0;
}