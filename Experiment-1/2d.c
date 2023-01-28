#include<stdio.h>
void main()
{ 
int a,b,c;
b=1;
printf("enter a");
scanf("%d", &a);
while(b<=10)
{
c=a*b;
printf("%dx%d=%d\n",a,b,c);
b=b+1;
}
return;
}

Output:
enter a 5
5x1=5
5x2=10
5x3=15
5x4=20
5x5=25
5x6=30
5x7=35
5x8=40
5x9=45
5x10=50
