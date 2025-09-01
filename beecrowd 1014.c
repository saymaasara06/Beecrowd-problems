#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);

    double Y, average_consumption;
    scanf("%lf", &Y);

    average_consumption = X / Y;

    printf("%.3lf km/l\n", average_consumption);
    return 0;
}
