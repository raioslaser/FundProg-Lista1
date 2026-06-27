#include <stdlib.h>
#include <stdio.h>

int main()
{
  float salbru, inss, imposto, salliq;

  printf("Qual o salario bruto? \n");
  scanf("%f", &salbru);
  printf("Qual a porcentagem do desconto do INSS? \n");
  scanf("%f", &inss);
  printf("Qual a porcentagem do imposto de renda? \n");
  scanf("%f", &imposto);

  salliq = salbru - ((inss / 100) * salbru) - ((imposto / 100) * salbru);
  printf("O salario liquido e de %.2f reais", salliq);

  system("pause");
  return 0;
}