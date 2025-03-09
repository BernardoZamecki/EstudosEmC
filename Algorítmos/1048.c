/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários
de acordo com a tabela abaixo:

Salário 	                  Percentual de Reajuste

0 - 400.00                    15%
400.01 - 800.00               12%
800.01 - 1200.00              10%
1200.01 - 2000.00             7&
Acima de 2000.00              4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como
o valor de reajuste ganho e o índice reajustado, em percentual.
Entrada

A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.
Saída

Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste
(ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste
ganho, conforme exemplo abaixo.
*/
#include <stdio.h>
 
int main() {
 
    float salario, novoSalario, aumento;
    int porcentAumento;

    scanf("%f", &salario);

    if (0 < salario && salario <= 400)
    {
        novoSalario = (salario * 1.15);
        porcentAumento = 15;
    }
    if (400 < salario && salario <= 800)
    {
        novoSalario = (salario * 1.12);
        porcentAumento = 12;
    }
    if (800 < salario && salario <= 1200)
    {
        novoSalario = (salario * 1.1);
        porcentAumento = 10;
    }
    if (1200 < salario && salario <= 2000)
    {
        novoSalario = (salario * 1.07);
        porcentAumento = 7;
    }
    if (2000 < salario)
    {
        novoSalario = (salario * 1.04);
        porcentAumento = 4;
    }

    aumento = novoSalario - salario;

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", novoSalario, aumento, porcentAumento);

    return 0;
}