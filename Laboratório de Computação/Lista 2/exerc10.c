/*
Escreva um programa que leia um número inteiro de 1 a 7e informe o
dia da semana correspondente, sendo domingo o dia de número 1, e assim sucessivamente.
Se o número não corresponder a um dia da semana, mostre uma mensagem de erro.
*/
#include <stdio.h>

int main()
{
    int semana;
    
    scanf("%d", &semana);
    
    if (semana > 7 || semana < 1)
    {
        printf("Número inválido");
    }
    else
    {
        if (semana == 1)
        {
            printf("Domingo");
        }
        if (semana == 2)
        {
            printf("Segunda-feira");
        }
        if (semana == 3)
        {
            printf("Terça-feira");
        }
        if (semana == 4)
        {
            printf("Quarta-feira");
        }
        if (semana == 5)
        {
            printf("Quinta-feira");
        }
        if (semana == 6)
        {
            printf("Sexta-feira");
        }
        if (semana == 7)
        {
            printf("Sabado");
        }
    }
    return 0;
}