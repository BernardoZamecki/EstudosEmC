/*
Escreva um programa que permita entrar com o salário de uma pessoa
e imprima o desconto referente ao INSS, segundo a tabela seguir:
Salário <= 600 -------------- Isento
600     >  Salário <= 1200 -- 20%
1200    <  Salário <= 2000 -- 25%
2000    <  Salário ---------- 30%
*/
#include <stdio.h>

int main()
{
    float salario;
    
    scanf("%f", &salario);
    
    if (salario <= 600)
    {
        printf("Isento");
    }
    else if (salario > 600 && salario <= 1200)
    {
        printf("Desconto: 20%%\nTotal: R$%.2f", (salario * 0.8));
    }
    else if (salario > 1200 && salario <= 2000)
    {
        printf("Desconto: 25%%\nTotal: R$%.2f", (salario * 0.75));
    }
    else if (salario > 2000)
    {
        printf("Desconto: 30%%\n Total R$%.2f", (salario * 0.7));
    }
    
    return 0;
}