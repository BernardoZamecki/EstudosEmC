/*
Em um país imaginário denominado Lisarb, todos os habitantes ficam felizes em pagar seus impostos,
pois sabem que nele não existem políticos corruptos e os recursos arrecadados são utilizados em
benefício da população, sem qualquer desvio. A moeda deste país é o Rombus, cujo símbolo é o R$.

Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. Em seguida,
calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.

Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, pois a
faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda. No exemplo fornecido
(abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total.
O valor deve ser impresso com duas casas decimais.

A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Imprima o texto "R$" seguido de um espaço e do valor total devido de Imposto de Renda, com duas casas
após o ponto. Se o valor de entrada for menor ou igual a 2000, deverá ser impressa a mensagem "Isento".
*/
#include <stdio.h>


/*
    Modelinho de função:
    tipo_de_valor_retornado nomeDaFunção(tipo_argumento argumento1, tipo_argumento argumento2, ...)
    {
        tipo_de_valor_retornado valor_a_ser_retornado;
        .
        .
        .

        return valor_a_ser_retornado; -> ao se fazer valor = nomeDaFunção(a, b, c); -> valor = valor_a_ser_retornado
}
*/
float calcImp(float salario, float valorInferior, float valorSuperior, float valorMultiplicativo)
{
    if (salario > valorInferior)
    {
        if (salario < valorSuperior || valorSuperior < 0)
        {
            return ((salario - valorInferior) * valorMultiplicativo);
        }
        else
        {
            return ((valorSuperior - valorInferior) * valorMultiplicativo);
        }
    }

    return 0;
}
 
int main()
{
    float salario, impRenda;

    scanf("%f", &salario);

    impRenda = 0;
    impRenda += calcImp(salario, 2000, 3000, 0.08);
    impRenda += calcImp(salario, 3000, 4500, 0.18);
    impRenda += calcImp(salario, 4500, -1, 0.28);

    if (impRenda == 0) 
    {
        printf("Isento\n");
    } 
    else
    {
        printf("R$ %.2f\n", impRenda);
    }
 
    return 0;
}