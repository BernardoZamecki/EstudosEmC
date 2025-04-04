/*
Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N

A entrada contém um valor inteiro N (2 < N < 1000).

Imprima a tabuada de N, conforme o exemplo fornecido.
*/
#include <stdio.h>

int main()
{
    int num, i;
    
    scanf("%d", &num);
    
    for(i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", i, num, num * i);
    }
    
    return 0;
}