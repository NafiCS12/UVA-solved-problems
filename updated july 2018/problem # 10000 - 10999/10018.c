#include<stdio.h>
#include<string.h>

int main()
{   int sum=0;
   char a[100], b[100];

   printf("Enter the string\n");
   gets(a);

    strcpy(b,a);
    strrev(b);
    sum = sum +(a+b);

   return 0;
}
