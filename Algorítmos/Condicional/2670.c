/*
O novo prédio da Sociedade Brasileira de Computação (SBC) possui 3 andares. Em
determinadas épocas do ano, os funcionários da SBC bebem muito café. Por conta
disso, a presidência da SBC decidiu presentear os funcionários com uma nova
máquina de expresso. Esta máquina deve ser instalada em um dos 3 andares, mas a
instalação deve ser feita de forma que as pessoas não percam muito tempo
subindo e descendo escadas.
 
Cada funcionário da SBC bebe 1 café expresso por dia. Ele precisa ir do andar
onde trabalha até o andar onde está a máquina e voltar para seu posto de
trabalho. Todo funcionário leva 1 minuto para subir ou descer um andar. Como a
SBC se importa muito com a eficiência, ela quer posicionar a máquina de forma a
minimizar o tempo total gasto subindo e descendo escadas.
 
Sua tarefa é ajudar a diretoria a posicionar a máquina de forma a minimizar o
tempo total gasto pelos funcionários subindo e descendo escadas.
 
A entrada consiste em 3 números, A1 , A2 , A3 (0 ≤ A1 , A2 , A3 ≤ 1000), um por
linha, onde Ai representa o número de pessoas que trabalham no i-ésimo andar.
 
Seu programa deve imprimir uma única linha, contendo o número total de minutos
a serem gastos com o melhor posicionamento possível da máquina.
*/
 
#include <stdio.h>
 
int main()
{
    int a1, a2, a3, minutos1, minutos2, minutos3;
    scanf("%d %d %d", &a1, &a2, &a3);

    minutos1 = a2 * 2 + a3 * 4;
    minutos2 = a1 * 2 + a3 * 2;
    minutos3 = a1 * 4 + a2 * 2;

    if (minutos1 <= minutos2 && minutos1 <= minutos3)
    {
        printf("%d\n", minutos1);
    }
    else if (minutos2 <= minutos1 && minutos2 <= minutos3)
    {
        printf("%d\n", minutos2);
    }
    else
    {
        printf("%d\n", minutos3);
    }

    return 0;
}