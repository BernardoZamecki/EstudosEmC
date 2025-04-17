/*
Faça um programa em C que calcule a quantidade de litros de combustível
consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km
por litro de combustível. O programa deverá ler o tempo decorrido na viagem
e a velocidade média e aplicar as fórmulas:

D = T * V

L = D / 12

Em que:

• D = Distância percorrida em horas

• T = Tempo decorrido

• V = Velocidade média

• L = Litros de combustível consumidos

Ao final, o programa deverá imprimir a distância percorrida e a quantidade de litros consumidos na viagem.
*/
#include <stdio.h>

int main()
{
    float distancia, tempo, velocidadeM, litros;
    
    printf("Qual a velocidade média da viagem em Km/h? ");
    scanf("%f", &velocidadeM);
    
    printf("Qual o tempo gasto na viagem em horas? ");
    scanf("%f", &tempo);
    
    distancia = tempo*velocidadeM;
    litros = distancia/12;
    
    printf("A distância é %.2f Km\nA quantidade de combustível consumida é %.2f L", distancia, litros);
    
    return 0;
}