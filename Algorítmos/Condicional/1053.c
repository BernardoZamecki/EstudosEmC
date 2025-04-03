/*
Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando
e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma
vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular
a duração deste evento.

Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual
o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato
hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas
primeiras linhas, indicando o término do evento.

Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.
*/
#include <stdio.h>

int main()
{
    int diaI, horaI, minI, segI, diaF, horaF, minF, segF, diaT, horaT, minT, segT;
    int segundosPassados = 0;
    char dia1[3];

    scanf("%s %d", dia1, &diaI);
    scanf("%d : %d : %d", &horaI, &minI, &segI);
    scanf("%s %d", dia1, &diaF);
    scanf("%d : %d : %d", &horaF, &minF, &segF);

    segundosPassados = segF - segI + (60*(minF-minI)) + (3600*(horaF-horaI)) + (86400*(diaF - diaI));
    
    diaT = segundosPassados / 86400;
    horaT = (segundosPassados / 3600) % 24;
    minT = (segundosPassados / 60) % 60;
    segT = segundosPassados % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",diaT, horaT, minT, segT );

    return 0;
}