/*
Neste problema, você deverá ler 3 palavras que definem o tipo de animal
possível segundo o esquema abaixo, da esquerda para a direita. 
Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.

A entrada contém 3 palavras, uma em cada linha, necessárias para identificar
o animal segundo a figura acima, com todas as letras minúsculas.

Imprima o nome do animal correspondente à entrada fornecida.
*/
#include <stdio.h>
#include <string.h>
 
int main()
{
    char tipo1[16], tipo2[16], tipo3[16];

    scanf("%s[^\n]", tipo1);
    scanf("%s[^\n]", tipo2);
    scanf("%s[^\n]", tipo3);

    if (strcmp(tipo1, "vertebrado") == 0)
    {
        if (strcmp(tipo2, "ave") == 0)
        {
            if (strcmp(tipo3, "carnivoro") == 0)
            {
                printf("aguia\n");
                return 0;
            }
            if (strcmp(tipo3, "onivoro") == 0)
            {
                printf("pomba\n");
                return 0;
            }
        }
        if (strcmp(tipo2, "mamifero") == 0)
        {
            if (strcmp(tipo3, "onivoro") == 0)
            {
                printf("homem\n");
                return 0;
            }
            if (strcmp(tipo3, "herbivoro") == 0)
            {
                printf("vaca\n");
                return 0;
            }
        }
    }
    if (strcmp(tipo1, "invertebrado") == 0)
    {
        if (strcmp(tipo2, "inseto") == 0)
        {
            if (strcmp(tipo3, "hematofago") == 0)
            {
                printf("pulga\n");
                return 0;
            }
            if (strcmp(tipo3, "herbivoro") == 0)
            {
                printf("lagarta\n");
                return 0;
            }
        }
        if (strcmp(tipo2, "anelideo") == 0)
        {
            if (strcmp(tipo3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
                return 0;
            }
            if (strcmp(tipo3, "onivoro") == 0)
            {
                printf("minhoca\n");
                return 0;
            }
        }
    }
}