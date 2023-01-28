#include<stdio.h>
void main()
{
int a=0,b=1,n,i,c;
printf("Enter the value of n");
scanf("%d", &n);
printf("%d\n%d\n",a,b);
for(i=3;i<=n;i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
return;
}

Output:
Enter the value of n
5
0
1
1
2
3
