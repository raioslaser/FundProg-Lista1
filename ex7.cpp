#include <stdlib.h>
#include <stdio.h>

int main()
{
    float base, altura;
    printf("Qual a base do triangulo? (CM)\n");
    scanf("%f", &base);
    printf("Qual a altura do triangulo? (CM)\n");
    scanf("%f", &altura);
    float area = base * altura / 2.0;

    printf("A area do seu triangulo e %f CM quadrados \n", area);

    system("pause");
    return 0;
}