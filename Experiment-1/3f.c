#include<stdio.h>
void main()
{
int num,n,i,flag;
printf("Enter the range");
scanf("%d", &n);
printf("The prime numbers in between the range 1 to %d are:\n",n);
for(num=1;num<=n;num++)
{
flag=0;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag++;
break;
}}
if(flag==0 && num!=1)
printf("%d\n",num);
}
return;
}

Output:
Enter the range 10
10
The prime numbers in between the range 1 to 10 are:
2
3
5
7
