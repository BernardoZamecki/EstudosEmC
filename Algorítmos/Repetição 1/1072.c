/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que
serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão
fora do intervalo, mostrando essas informações.

A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o
número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).

Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão
fora (out) do intervalo.
*/
#include <stdio.h>

int main()
{
    int rept, num, i, in, out;
    
    scanf("%d", &rept);
    
    for(i = 0, in = 0, out = 0; i < rept; i++)
    {
        scanf("%d", &num);
        
        if(num >= 10 && num <= 20)
        {
            in += 1;
        }
        else
        {
            out += 1;
        }
    }
    printf("%d in\n%d out\n", in, out);
    
    return 0;
}