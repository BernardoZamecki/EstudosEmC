/*
Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1
até N, inclusive N, se for o caso.

A entrada contém um valor inteiro N (5 < N < 2000).

Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo
abaixo.

Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006
ao invés de 1000000 o que ocasionará resposta errada. Neste caso, configure a
precisão adequadamente para que isso não ocorra.
*/
#include <stdio.h>

int main()
{
    int num, i;
    
    scanf("%d", &num);
    
    for(i = 2; i <= num; i += 2)
    {
        printf("%d^2 = %d\n", i, i * i);
    }
    
    return 0;
}