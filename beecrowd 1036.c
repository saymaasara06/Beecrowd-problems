#include <stdio.h>

int main()
{
    double A, B, C, subtraction, R1, R2;

    scanf("%lf %lf %lf", &A, &B, &C);

    subtraction = (B * B) - (4 * A * C);

    if (A == 0 || subtraction < 0) {
        printf("Impossivel calcular\n");
    }
    else
     {
        R1 = (-B + sqrt(subtraction)) / (2 * A);
        R2 = (-B - sqrt(subtraction)) / (2 * A);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}

