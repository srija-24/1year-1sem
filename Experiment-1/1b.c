#include<stdio.h>
void main()
{
//implicit//
int a;
float b;
float c;
printf("enter the a and b");
scanf("%d %f", &a, &b);
c=b/a;
printf("c is equal to %f",c);
//explicit//
a=(int)b/c;
printf("a is equal to %d",a);
return;
}

Output:
enter the a and b 20 20.40
20 20.40
c is equal to 1.020000
a is equal to 19