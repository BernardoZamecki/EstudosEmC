/*
Escreva um programa que permita entrar com o nome, a nota da prova 1
e a nota da prova 2 de um aluno. O programa deve imprimir o nome,
a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens:
“Aprovado”, “Reprovado” ou “em Prova Final” (a média é 7 para aprovação,
menor que 3 para reprovação e as demais em prova final).
*/
#include <stdio.h>

int main()
{
    char nome[50];
    float n1, n2, media;
    
    scanf("%[^\n] %f %f", nome, &n1, &n2);
    
    media = (n1 + n2)/(2);
    
    printf("Nome: %s\nNota N1: %.1f\nNota N2: %.1f\nMédia: %.1f\n", nome, n1, n2, media);
    
    if (media >= 7)
    {
        printf("Aprovado\n");
    }
    else if (media < 7 && media > 3)
    {
        printf("Em Prova Final\n");
    }
    else
    {
        printf("Reprovado\n");
    }
    
    return 0;
}