/*
Faça um programa em C que leia o nome o endereço e o telefone de um
cliente e ao final, imprima esses dados.**

** Esse exercício usa string, então não precisa ser entregue ainda,
pq vamos estudar esse tema algumas aulas mais adiante!
*/
#include <stdio.h>

int main()
{
    char nome[64], endereço[128], telefone[32];
    
    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);
    printf("Agora digite o seu endereço: ");
    scanf(" %[^\n]", endereço);
    printf("Por ultilmo o seu telefone: ");
    scanf(" %[^\n]", telefone);
    
    printf("Seus dados são:\nnome: %s\nendereço: %s\ntelefone: %s", nome, endereço, telefone);
    
    return 0;
}