#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float d,root1,root2;
printf("enter the values of a,b,c for eq ax^2+bx+c=0");
scanf("%d %d %d", &a, &b, &c);
d=(b*b)-4*a*c;
if(d>0)
{
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
printf("The roots are %f and %f \n",root1,root2);
printf("the roots are equal");
}
else if(d==0)
{
root1=-b/(2*a);
root2=-b/(2*a);
printf("the roots are %f and %f \n",root1,root2);
printf("the roots ar equal");
}
else
printf("roots are imaginary");
return;
}

Output:
Enter the values of a,b,c for eq ax^2+bx+c=0
1 -2 1
The roots are 1.000000 and 1.000000 
The roots ar equal
