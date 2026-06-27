#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2;
    printf("Digite um numero INTEIRO\n");
    scanf("%d", &n1);
    printf("Digite outro numero INTEIRO que NAO SEJA 0\n");
    scanf("%d", &n2);
    int n1dn2 = n1 / n2, n1rn2 = n1 % n2;
    printf("Seus resultados sao: %d e %d \n", n1dn2 ,n1rn2);
    system("pause");
    return 0;
}