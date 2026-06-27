#include <stdlib.h>
#include <stdio.h>

int main()
{
    float tf, tc;

    printf("Qual a temperatura em fahrenheit? \n");
    scanf("%f", &tf);

    tc = (tf - 32) / 1.8;
    printf("A temperatura em graus celsius e %.2f \n", tc);
    system("pause");
    return 0;
}