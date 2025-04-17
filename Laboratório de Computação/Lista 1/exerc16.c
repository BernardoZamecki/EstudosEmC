/*
Faça um programa em C que calcule o reajuste do salário de um funcionário.
Para isso, o programa deverá ler o salário atual do funcionário e ler o percentual de reajuste.
Ao final imprimir o valor do novo salário.
*/
#include <stdio.h>

int main()
{
    float salario, percentual, salarioCorrigido;
    
    printf("Qual é o salário do funcionário em real por mês? ");
    scanf("%f",&salario);
    
    printf("Qual o percentual de correção a mais? ");
    scanf("%f",&percentual);
    
    salarioCorrigido = salario+(salario*(percentual/100));
    
    printf("O salário corrigido é R$%.2f", salarioCorrigido);
    
    return 0;
}