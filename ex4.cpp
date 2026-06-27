#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2;
    printf("Digite um numero INTEIRO\n");
    scanf("%d", &n1);
    printf("Digite outro numero INTEIRO\n");
    scanf("%d", &n2);
    int n1n2 = n1 + n2, n1xn2 = n1 * n2;
    printf("Seus resultados sao: %d e %d \n", n1n2 ,n1xn2);
    system("pause");
    return 0;
}