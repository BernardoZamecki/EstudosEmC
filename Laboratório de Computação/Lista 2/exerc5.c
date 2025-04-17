/*
Escreva um programa que leia 3 números inteiros e imprima o maior deles
*/
#include <stdio.h>

int main ()
{
    int num1, num2, num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // caso todos sejam iguais -> imprimir n1
    // caso n1 e n2 forem iguais e maior que o n3 -> imprimir n1
    // caso n1 e n3 forem iguais e maior que o n2 -> imprimir n1
    // caso n1 for o maior -> imprimir n1
    if ((num1 == num2 && num1 == num3 && num2 == num3) 
    || (num1 == num2 && num1 > num3) 
    || (num1 == num3 && num1 > num2) 
    || (num1 > num3 && num1 > num2))
    {
        printf("Primeiro número \"%d\" é o maior", num1);
    }
    // caso n2 e n3 forem iguais e maior que n1 -> imprimir n2
    // caso n2 for o maior, imprimir n2
    else if ((num2 == num3 && num2 > num1) 
    || (num2 > num1 && num2 > num3))
    {
        printf("Segundo número \"%d\" é o maior", num2);
    }
    // caso nenhum dos casos anteriores derem certo -> imprimir n3
    else
    {
        printf("Terceiro número \"%d\" é o maior", num3);
    }
    return 0;
}