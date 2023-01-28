#include<stdio.h>
void main()
{
int num,flag=0,i;
printf("Enter the number");
scanf("%d", &num);
for(i=2;i<num/2;i++);
{
if(num%i==0)
flag++;
}
if(flag==0)
printf("The given number is prime number");
else
printf("The given number is not a prime number");
return;
}

Output:
Enter the number 17
17
The given number is prime number