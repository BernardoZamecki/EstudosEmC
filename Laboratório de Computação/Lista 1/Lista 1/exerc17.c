/*
Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit.
Para isso, leia o valor em centígrados e calcule com base na fórmula a seguir.
Após calcular o programa deve imprimir o resultado da conversão.

F = (9 * C + 160) / 5

• F = Graus em Fahrenheit

• C = Graus centígrados
*/
#include <stdio.h>

int main()
{
    float grauF, grauC;
    
    printf("Qual o seu grau em C°? ");
    scanf("%f", &grauC);
    
    grauF = (9*grauC+160)/5;
    
    printf("%.2f C° = %.2f F°", grauC, grauF);
    
    return 0;
}