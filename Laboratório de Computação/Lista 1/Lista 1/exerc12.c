/*
Faça um programa em C que leia um número real e calcule o quadrado deste número.
Ao final, o programa deve imprimir o resultado do cálculo.
*/
#include <stdio.h>

int main()
{
    float num, potencia;
    
    printf("Digite um número e daremos sua potência ao quadrado: ");
    scanf("%f", &num);
    
    potencia = num*num;
    
    printf("%f² = %f", num, potencia);
    
    return 0;
}