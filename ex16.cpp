#include <stdlib.h>
#include <stdio.h>

int main()
{
    const int larg = 5, alt = 2, consumo = 3, tpl = 2;
    int area, tinta, latas;

    area = larg * alt;
    tinta = area * consumo;
    latas = tinta / tpl;

    printf("A quantidade de latas necessarias para pintar a parede e de %d latas. \n", latas);
    system("pause");
    return 0;
}