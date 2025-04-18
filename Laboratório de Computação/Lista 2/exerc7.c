/*
A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários.
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto.
Escreva um programa que permita entrar com o salário bruto e o valor da prestação
e informar se o empréstimo pode ou não ser concedido ao funcionário.
*/
#include <stdio.h>

int main ()
{
    float salario, prestacao;
    
    scanf("%f %f", &salario, &prestacao);
    
    if (prestacao <= (salario * 0.3)
    {
        printf("O empréstimo de R$ %.2f poderá ser concebido", prestacao);
    }
    else
    {
        printf("O empréstimo de R$ %.2f não poderá ser concebido", prestacao);
    }
    return 0;
}