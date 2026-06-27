#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Digite um numero INTEIRO\n");
    scanf("%d", &num);
    int numx2 = num * 2, numpow2 = pow(num, 2);
    printf("Seus resultados sao: %d e %d \n", numx2 ,numpow2);
    system("pause");
    return 0;
}