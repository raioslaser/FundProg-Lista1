#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
   float s, so, t, to, vm;

   printf("Qual a posicao inicial? (m) \n");
   scanf("%f", &so);
   printf("Qual a posicao final? (m) \n");
   scanf("%f", &s);
   printf("Qual o tempo inicial? (s) \n");
   scanf("%f", &to);
   printf("Qual o tempo final? (s) \n");
   scanf("%f", &t);

   vm = (s - so) / (t - to);
   printf("A velocidade media e de %.2f m/s \n", vm);
   system("pause");
   return 0;
}