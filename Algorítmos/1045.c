/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente,
de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo 
e triângulo que estes três lados formam, com base nos seguintes casos, sempre
escrevendo uma mensagem adequada:

se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Imprima todas as classificações do triângulo especificado na entrada.
*/
#include <stdio.h>
 
int main()
{
    float a, b, c, max, numB, numC;

    scanf("%f %f %f", &a, &b, &c);


    if (a > b)
    {
        max = a;
        numB = b;
        numC = c;
    }
    else
    {
        numB = a;
        max = b;
        numC = c;
    }
    if (c > max)
    {
        numB = a;
        numC = b;
        max = c;
    }

    if (max >= (numB + numC))
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if ((max * max) == (numB * numB) + (numC * numC))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if ((max * max) > (numB * numB) + (numC * numC))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if ((max * max) < (numB * numB) + (numC * numC))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (max == numB && max == numC && numB == numC)
    {
        printf ("TRIANGULO EQUILATERO\n");
    }
    else if (numB == numC || numB == max || numC == max)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}