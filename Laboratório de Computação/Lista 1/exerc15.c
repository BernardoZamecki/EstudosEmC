/*
Faça um programa em C que leia o valor de um produto, o percentual do desconto
desejado e imprima o valor do desconto e o valor do produto subtraindo o desconto.
*/
#include <stdio.h>

int main()
{
    float produto, desconto,produtoFinal;
    
    printf("Qual o valor do produto em real? ");
    scanf("%f",&produto);
    
    printf("Qual o desconto em porcentagem? ");
    scanf("%f",&desconto);
    
    produtoFinal = produto-(produto*(desconto/100));
    
    printf("O valor do seu produto com desconto é R$%.2f", produtoFinal);
    
    return 0;
}