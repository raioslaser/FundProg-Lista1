#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    const int a = 5, b = 10, c = -2;
    float res1 = b / a, res2 = res1 / 100, res3 = pow(c, 2);
    float exp1 = res2 * c, exp2 = sqrt(res3 + res1 + 3);
    printf("Os resultados das expressoes sao: %f e %f \n", exp1, exp2);
    system("pause");
    return 0;
}