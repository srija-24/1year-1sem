#include<stdio.h>
void main()
{
int a;
int b,p,d;
printf("enter a and b");
scanf("%d %d", &a, &b);
printf("add is %d\n",a+b);
printf("sub is %d\n",a-b);
printf("mul is %d\n",a*b);
printf("div is %d\n",a/b);
printf("mod is %d\n",a%b);
printf("l_and is %d\n",(a>b && a<b));
printf("l_or is %d\n",(a=b || a<b));
printf("l_not is %d\n",!(a!=b && a>b));
printf("greaterthan %d\n",a>b);
printf("lessthan %d\n",a<b);
printf("equals to %d\n",a==b);
printf("not equal %d\n",a!=b);
printf("bitwise or %d\n",(a<b | b<a));
printf("bitwise and %d\n",(a=b & a>b));
p=d=20;
p=d++;
printf("post increment is %d\n",p);
p=++d;
printf("pre increment is %d\n",p);
p=d--;
printf("post decremnt is %d\n",p);
p=--d;
printf("pre decrement is %d",p);
return;
}

Output:
enter a and b 40 20
40 20
add is 60
sub is 20
mul is 800
div is 2
mod is 0
l_and is 0
l_or is 1
l_not is 1
greaterthan 0
lessthan 1
equals to 0
not equal 1
bitwise or 1
bitwise and 0
post increment is 20
pre increment is 22
post decremnt is 22
pre decrement is 20
