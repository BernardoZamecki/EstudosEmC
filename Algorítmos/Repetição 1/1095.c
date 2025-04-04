/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Não há nenhuma entrada neste problema.

Imprima a sequencia conforme exemplo abaixo
I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0
*/
#include <stdio.h>

int main()
{
    int i, j, aux;
    
    for(i = 1, j = 60; i < 38; i += 3)
    {
        aux = i / 3;
        j = 60 - (5 * aux);
        printf("I=%d J=%d\n", i, j);
    }
    return 0;
    
}