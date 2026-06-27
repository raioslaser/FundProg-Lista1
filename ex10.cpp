#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2;
    float p1, p2;
    float mediaar, mediapon, mediageo;
    
    printf("Qual o peso da primeira prova? \n");
    scanf("%f", &p1);
    printf("Qual a nota do aluno na primeira prova? \n");
    scanf("%f", &n1);
    printf("Qual o peso da segunda prova? \n");
    scanf("%f", &p2);
    printf("Qual a nota do aluno na segunda prova? \n");
    scanf("%f", &n2);
    
    mediaar = (n1 + n2) / 2;
    mediapon = (n1*p1 + n2*p2) / (p1 + p2);
    mediageo = sqrt(n1 * n2);

    printf("As medias aritmetica, ponderal e geometrica do aluno sao, respectivamente, %.2f, %.2f, %.2f \n", mediaar, mediapon, mediageo);

    system("pause");
    return 0;
}