#include <stdio.h>
int main()
{
    int N, X;
    int inCount = 0, outCount = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        {
        scanf("%d", &X);
        if (X >= 10 && X <= 20)
            inCount++;
        else
            outCount++;
    }

    printf("%d in\n", inCount);
    printf("%d out\n", outCount);

    return 0;
}

