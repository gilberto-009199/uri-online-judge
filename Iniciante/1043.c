#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a > abs(b-c) && a < (b+c) &&
        b > abs(a-c) && b < (a+c) &&
        c > abs(a-b) && c < (a+b)){

        printf("Perimetro = %.1lf\n", a + b + c);

    } else {

        printf("Area = %.1lf\n", (c * (a+b)) / 2.0);
    }

    return 0;
}
