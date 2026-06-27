#include <stdlib.h>
#include <stdio.h>

int main() 
{
    char mensagem[50];
    printf("Digite uma mensagem (Max. 50 char. e sem espacos): \n");
    scanf("%s", &mensagem);
    printf("O usuario disse: %s \n", mensagem);
    system("pause");
    return 0;
}