#include <stdio.h>
 int main()
 {

   int age;
   scanf("%d", &age);

   int year = age/365;
   age = age%365; //remaining
   int month = age/30;
   int days = age%30; //remaining

   printf("%d ano(s)\n",year);
   printf("%d mes(es)\n",month);
   printf("%d dia(s)\n",days);
    return 0;
}
