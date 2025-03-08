/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a
duração do jogo, sabendo que o mesmo pode começar em um dia e terminar
em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

A entrada contém dois valores inteiros representando a hora de início
e a hora de fim do jogo.

Apresente a duração do jogo conforme exemplo abaixo.
*/
#include <stdio.h>
 
int main()
{
    int horaInicial, horaFinal, a, b, tempoTotal;

    scanf("%d %d", &horaInicial, &horaFinal);
    
    if (horaInicial > horaFinal)
    {
        a = (horaInicial - 24) * (-1);
        b = horaFinal;

        tempoTotal = a + b;
    }
    else if (horaInicial < horaFinal)
    {
        tempoTotal = horaFinal - horaInicial;
    }
    else if (horaInicial == horaFinal)
    {
        tempoTotal = 24;
    }

    printf("O JOGO DUROU %d HORA(S)", tempoTotal);

    return 0;
}