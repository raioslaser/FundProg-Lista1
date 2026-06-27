#include <stdlib.h>
#include <stdio.h>

int main()
{
    float ppkg, kg, pt;

    printf("Qual o preco por kg do produto? \n");
    scanf("%f", &ppkg);
    printf("Quantos kg serao levados? \n");
    scanf("%f", &kg);

    pt = ppkg * kg;
    printf("O preco total e de %.2f reais. \n", pt);

    system("pause");
    return 0;
}