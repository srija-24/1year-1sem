#include<stdio.h>
void main()
{
int a=30;
int b=40;
int c=20;
int greatest;
greatest=a>b?(a>c?a:c):(b>c?b:c);
printf("The greatest of the three is %d",greatest);
return;
}

Output:
The greatest of the three is 40