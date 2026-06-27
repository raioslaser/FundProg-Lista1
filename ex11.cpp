#include <stdlib.h>
#include <stdio.h>

int main()
{
    char prod1[50], prod2[50], prod3[50];
    float val1, val2, val3, valt;
    int q1, q2, q3;

    printf("Digite o nome do primeiro produto (Sem espacos, max. 50 caracteres) \n");
    scanf("%s", prod1);
    printf("Digite o nome do segundo produto (Sem espacos, max. 50 caracteres) \n");
    scanf("%s", prod2);
    printf("Digite o nome do terceiro produto (Sem espacos, max. 50 caracteres) \n");
    scanf("%s", prod3);

    printf("Digite o valor do primeiro produto \n");
    scanf("%f", &val1);
    printf("Digite o valor do segundo produto \n");
    scanf("%f", &val2);
    printf("Digite o valor do terceiro produto \n");
    scanf("%f", &val3);

    printf("Quantas unidades de %s serao levadas? \n", prod1);
    scanf("%d", &q1);
    printf("Quantas unidades de %s serao levadas? \n", prod2);
    scanf("%d", &q2);
    printf("Quantas unidades de %s serao levadas? \n", prod3);
    scanf("%d", &q3);

    valt = (val1 * q1) + (val2 * q2) + (val3 * q3);
    printf("O valor total dos produtos e de %.2f reais. \n", valt);

    system("pause");
    return 0;
}