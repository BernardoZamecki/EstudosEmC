// 1 - colocar as bibliotecas

#include <stdio.h>
#include <math.h>

// 2 - Definir modos

#define MODO_COMPLETO 1
#define MODO_INCOMPLETO_B 2
#define MODO_INCOMPLETO_C 3


int main()
{
    // 3 - Colocar as variáveis (apenas no final)
    float a, b, c;
    float delta, x1, x2;

    // modo = tipo de calculo de baskhara

    int modo;
    char repetir;

    repetir = 's';
    while (repetir == 's')
    {
        // introdução - saber qual o tipo de baskhara
        printf("Bem vindo! Primeiro escolha o seu tipo de calculo de segundo grau, digite 1 para calculo completo (ax²+bx+c=0), digite 2 para (ax²+bx=0) e digite 3 para (ax²+c=0) ");
        scanf(" %d", &modo);

        if (modo == MODO_COMPLETO)
        {

            // Apenas para ax² + bx + c = 0

            printf("Digite o coeficiente a: ");
            scanf(" %f", &a);

            printf("Digite o coeficiente b: ");
            scanf(" %f", &b);

            printf("Digite o coeficiente c: ");
            scanf(" %f", &c);

            delta = b * b - 4 * a * c;

            if (delta > 0)
            {

                // Se delta for maior que zero, então haverá x1 e x2

                x1 = ((-b + sqrt(delta)) / (2 * a));
                x2 = ((-b - sqrt(delta)) / (2 * a));

                printf("Os valores de X1 e X2 são:%f, %f", x1, x2);
            }
            if (delta == 0)
            {

                // Se delta for igual a zero, então x1 será igual a x2 (ou então somente x)

                x1 = ((-b) / (2 * a));
                x2 == x1;

                printf("Os valores de delta deram 0, ou seja, x1 e x2 são iguais, tendo o valor de: %f", x1);
            }
            else
            {
                // Se delta < 0, o valor da raiz de delta é imaginário

                printf("Não existem raizes reais");
            }
        }
        // Apenas para ax² + bx = 0 (sem o coeficiente c) 
        else if (modo == MODO_INCOMPLETO_B)
        {
            printf("Digite o coeficiente a: ");
            scanf(" %f", &a);

            printf("Digite o coeficiente b: ");
            scanf(" %f", &b);

            delta = b * b;

            // Não é necessário calcular o resto de delta, visto que -4*a*c (c = 0) que é igual a 0

            x1 = ((-b + sqrt(delta)) / (2 * a));
            x2 = ((-b - sqrt(delta)) / (2 * a));

            printf("Os valores de X1 e X2 são: %f, %f", x1, x2);
        }


        // Somente para ax² + c = 0
        else if (modo == MODO_INCOMPLETO_C)
        {
            printf("Digite o coeficiente a: ");
            scanf(" %f", &a);

            printf("Digite o coeficiente c: ");
            scanf(" %f", &c);

            delta = -4 * a * c;

            // Não é necessário colocar o resto de delta, visto que b*b (0² = 0) que é igual a 0

            if (delta > 0)
            {

                x1 = (sqrt(delta) / (2 * a));
                x2 = (sqrt(delta) / (2 * a));

                printf("Os valores de X1 e X2 são: %f, %f", x1, x2);
            }
            else
            {
                printf("Não existem raizes reais");
            }

            // Não é necessário colocar "if delta = 0"
        }

        printf(", continuar? (s/n) ");
        scanf(" %c", &repetir);
    }
    return 0;
}