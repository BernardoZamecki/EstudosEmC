/*
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo.
A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Quatro números inteiros representando a hora de início e fim do jogo.

Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
*/
#include <stdio.h>
 
int main()
{
    int horaInicial, horaFinal, minInicial, minFinal, a, b, c, d, hora, minuto;

    scanf("%d %d %d %d", &horaInicial, &minInicial, &horaFinal, &minFinal);
    
    if (minInicial == minFinal)
    {
        if (horaInicial == horaFinal)
        {
            hora = 24;
        }
        if (horaInicial > horaFinal)
        {
            hora = ((horaFinal - horaInicial) + 24);
        }
        if (horaInicial < horaFinal)
        {
            hora = (horaFinal - horaInicial);
        }
        minuto = 0;
    }
    if (minInicial > minFinal)
    {
        if (horaInicial == horaFinal)
        {
            hora = 23;
        }
        if (horaInicial > horaFinal)
        {
            hora = ((horaFinal - horaInicial) + 23);
        }
        if (horaInicial < horaFinal)
        {
            hora = (horaFinal - horaInicial - 1);
        }
        minuto = ((minFinal - minInicial) + 60);
    }
    if (minInicial < minFinal)
    {
        if (horaInicial == horaFinal)
        {
            hora = 0;
        }
        if (horaInicial > horaFinal)
        {
            hora = ((horaFinal - horaInicial) + 24);
        }
        if (horaInicial < horaFinal)
        {
            hora = (horaFinal - horaInicial);
        }
        minuto = (minFinal - minInicial);
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    
    return 0;
}