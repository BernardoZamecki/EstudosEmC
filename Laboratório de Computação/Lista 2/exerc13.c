/*
Escreva um programa que leia a idade de uma pessoa e informe:
- Se é maior de idade
- Se é menor de idade
- Se é maior de 65 anos
*/
#include <stdio.h>

int main()
{
    int idade;
    
    scanf("%d", &idade);
    
    if (idade < 18)
    {
        printf("%d ainda é menor de idade", idade);
    }
    if (idade >= 18)
    {
        printf("%d já é maior de idade ", idade);
    }
    if  (idade >= 65)
    {
        printf("e maior que 65");
    }
    return 0;
}