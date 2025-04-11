/*
Faça um programa em C que efetue a apresentação do valor da conversão
em real (R$)de um valor lido em dólar (US$). Para isso, será
necessário também ler o valor da cotação do dólar.
*/
#include <stdio.h>

int main()
{
    float moedaDolar, valorDolar, valorReais;
    
    printf("Quanto 1,00 dólar vale em reais atualmente? ");
    scanf("%f", &moedaDolar);
    //espero que jamais R$ 7,00 para cima kkk

    printf("Qual o valor em reais a ser convertido? ");
    scanf("%f", &valorReais);
    
    valorDolar = moedaDolar*valorReais;
    
    printf("\nR$%.2f em dólar são: $%.2f", valorReais, valorDolar);
    
    return 0;
}