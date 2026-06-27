#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float pfabrica, pimposto, prevendedor, pfinal;
    char nome[100];

    printf("Qual nome do veiculo? (Sem espacos, max 100 caracteres.) \n");
    scanf("%s", nome);
    printf("Qual o preco de fabrica do veiculo? \n");
    scanf("%f", &pfabrica);

    pimposto = 45.0 / 100 * pfabrica;
    prevendedor = 28.0 / 100 * pfabrica;
    pfinal = pfabrica + pimposto + prevendedor;

    printf("O preco final do veiculo %s e de %f reais. \n", nome, pfinal);

    system("pause");
    return 0;
}