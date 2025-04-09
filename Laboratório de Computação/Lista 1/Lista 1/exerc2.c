/*
Faça um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/
#include <stdio.h>

int main ()
{
    int num;
    
    printf("Digite um número inteiro e colocarei seu antecessor e sucessor: ");
    scanf("%d", &num);
    printf("Antecessor: %d e sucessor: %d", num-1, num+1);
    
    return 0;
}