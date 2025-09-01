#include <stdio.h>
int main()
 {
    char name[50];
    double fixedSalary, sales, total;

    scanf("%s", name);
    scanf("%lf %lf", &fixedSalary, &sales);

    total = fixedSalary + (sales * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
