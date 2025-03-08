/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo.
Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura,
mostrando a mensagem

Area = XX.X

A entrada contém três valores reais.

O resultado deve ser apresentado com uma casa decimal.
*/

#include <stdio.h>
 
int main()
{
    float a, b, c, area, perimetro;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    perimetro = a + b + c;
    area = ((a + b) * c)/2;

    if ((a >= b && a >= c) || (a > b && a > c))
    {
        if (b + c > a)
        {
            printf("Perimetro = %.1f\n", perimetro);
        }
        else
        {
            printf("Area = %.1f\n", area);
        }
        return 0;
    }
    if ((b >= a && b >= c) || (b > a && b > c))
    {
        if (a + c > b)
        {
            printf("Perimetro = %.1f\n", perimetro);
        }
        else
        {
            printf("Area = %.1f\n", area);
        }
        return 0;
    }
    if ((c >= a && c >= b) || (c > a && c > b))
    {
        if (a + b > c)
        {
            printf("Perimetro = %.1f\n", perimetro);
        }
        else
        {
            printf("Area = %.1f\n", area);
        }
        return 0;
    }
    return 0;
}