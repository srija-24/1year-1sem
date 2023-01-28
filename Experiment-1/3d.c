#include<stdio.h>
void main()
{
int num,n,sum=0,rev=0,r;
printf("enter the num");
scanf("%d", &num);
n=num;
while(n>0)
{
r=n%10;
sum=sum+r;
rev=rev*10+r;
n=n/10;
}
if(num==rev)
printf("It is a palindrome");
else
printf("Not a palidrome");
return;
}

Output1:
enter the num 1221
1221
It is a palindrome
Output2:
enter the num 100
100
Not a palidrome