/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Não há nenhuma entrada neste problema.

Imprima a sequencia conforme exemplo abaixo
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
...
I=9 J=15
I=9 J=14
I=9 J=13 
*/
#include <stdio.h>

int main()
{
    int i, j;
    
    for(i = 1, j = 7; i < 10; i += 2, j +=2)
    {
        printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", i, j, i, j - 1, i, j - 2);
    }
    return 0;
    
}