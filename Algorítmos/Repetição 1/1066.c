/*
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares,
quantos valores digitados foram ímpares, quantos valores digitados foram positivos
e quantos valores digitados foram negativos.
Entrada

O arquivo de entrada contém 5 valores inteiros quaisquer.
Saída

Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não
esquecendo o final de linha após cada uma.
*/
#include <stdio.h>

int main()
{
    int num, par, impar, pos, neg, i;
    
    for(i = 0, par = 0, impar = 0, pos = 0, neg = 0; i < 5; i++)
    {
        scanf("%d", &num);
        
        if (num % 2 == 0)
        {
            par += 1;
        }
        else
        {
            impar += 1;
        }
        if(num > 0)
        {
            pos += 1;
        }
        else if (num < 0)
        {
            neg += 1;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, pos, neg);

    return 0;
}