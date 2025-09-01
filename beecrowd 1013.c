#include <stdio.h>
 int main()
 {

 int a,b,c;
 scanf("%d %d %d", &a, &b, &c);

 int Maior_AB = (a+b+abs(a-b))/2;
 int Maior_ABC = (Maior_AB+c+abs(Maior_AB-c))/2;

 printf("%d eh o maior\n", Maior_ABC);

    return 0;
}
