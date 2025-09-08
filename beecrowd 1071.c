#include <stdio.h>
int main()
 {
    int X, Y, sum = 0;
    scanf("%d %d", &X, &Y);

    int start = X < Y ? X+1 : Y+1;
    int end = X > Y ? X : Y;

    for (int i = start; i < end; i++)
        {
        if (i % 2 != 0)
         {
            sum += i;
         }
    }

    printf("%d\n", sum);

    return 0;
}

