/*
Faça um programa em C que leia o saldo de uma conta poupança e imprima o novo saldo,
considerando um reajuste de 2%.
*/
#include <stdio.h>

int main()
{
    float poupança, saldo;
    
    printf("Digite o seu valor na poupança: ");
    scanf("%f", &poupança);
    
    saldo = poupança+(poupança*0.02);
    
    printf("Valor da poupança corrigido: R$ %.2f", saldo);
    
    return 0;
}