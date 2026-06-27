#include <stdlib.h>
#include <stdio.h>

int main()
{
    char nome[100], sobrenome[100];
    printf("Qual o seu nome? (Maximo de 100 caracteres e sem espacos) \n");
    scanf("%s", nome);
    printf("Qual o seu sobrenome? (Maximo de 100 caracteres e sem espacos) \n");
    scanf("%s", sobrenome);
    printf("Nome: %s %s \n", nome, sobrenome);

    system("pause");
    return 0;
}