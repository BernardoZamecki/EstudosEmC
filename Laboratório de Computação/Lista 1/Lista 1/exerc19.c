/*
Faça um programa em C que calcule o valor de uma prestação em atraso.
Para isso, o programa deve ler o valor da prestação vencida, a taxa
periódica de juros e o período de atraso. Ao final, o programa deve
imprimir o valor da prestação atrasada, o período de atraso, os juros
que serão cobrados pelo período de atraso, o valor da prestação acrescido
dos juros. Considere juros simples.
*/
#include <stdio.h>

int main()
{
    int periodoAtraso;
    float prestacaoVencida, taxaPeriodica, prestacaoAtrasada, juros;
    
    printf("Qual o valor da prestação vencida em reais? ");
    scanf("%f", &prestacaoVencida);
    
    printf("Qual a taxa periódica em %% por dia? ");
    scanf("%f", &taxaPeriodica);
    
    printf("Qual o período de atraso em dias? ");
    scanf("%d", &periodoAtraso);
    
    juros = (prestacaoVencida*taxaPeriodica*periodoAtraso)/100;
    prestacaoAtrasada = prestacaoVencida+juros;
    
    printf("\nO valor da prestação atrasada é de R$%.2f\n"
            "Taxa adicionada: R$%.2f\n"
            "Total de dias em atraso: %d dia"
            , prestacaoAtrasada, juros, periodoAtraso);

    return 0;
}