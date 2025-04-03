/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram
positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos
digitados, com um dígito após o ponto decimal.
 
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante.
Pelo menos um destes números será positivo.
 
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha
deve mostrar a média dos valores positivos digitados.
*/
#include <stdio.h>
 
int main()
{
    int i, numP;
    float num, numT, media;
    for(i = 0, numP = 0, numT = 0; i < 6; i += +1)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            numP += +1;
            numT += num;
        }
    }
    media = numT / numP;
    printf("%d valores positivos\n%.1f\n", numP, media);
    return 0;
}