/*
Escreva um programa que permita entrar com o ano de nascimento
da pessoa e com o ano atual. O programa deve imprimir a idade da pessoa.
O programa deve verificar se o ano de nascimento informado é válido
(ano de nascimento deve ser menor que o ano atual), antes de realizar o cálculo da idade.
*/
#include <stdio.h>

int main()
{
    int anoNascimento, anoAtual;
    
    scanf("%d %d", &anoNascimento, &anoAtual);
    
    if (anoNascimento > anoAtual)
    {
        printf("Ano inválido");
    }
    else
    {
        printf("Você tem %d ano(s)", (anoAtual - anoNascimento));
    }
    return 0;
}