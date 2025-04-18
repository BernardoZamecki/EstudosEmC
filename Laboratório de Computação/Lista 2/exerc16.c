/*
Um comerciante comprou um produto e quer vendê-lo com um lucro de 45%
se o valor da compra for menor que R$20,00, caso contrário,
o lucro será de 30%. Escreva um programa que leia o valor do
produto e imprima o valor da venda.
*/
#include <stdio.h>

int main()
{
    float valorProduto, valorVenda;
    
    scanf("%f", &valorProduto);
    
    if (valorProduto < 20)
    {
        valorVenda = (valorProduto * 1.45);
    }
    else
    {
        valorVenda = (valorProduto * 1.3);
    }
    
    printf("Valor de Venda: R$%.2f", valorVenda);
    
    return 0;
}