#include<math.h>
#include<stdio.h>
void main()
{
int p,t,r;
float simple;
float compound;
//simple interest//
printf(" enter p t r");
scanf("%d %d %d", &p, &t, &r);
simple=(p*t*r)/100;
printf(" simple intrest is %f\n",simple);
//comount interest//
compound=p*pow(1+r/100,t);
printf("compound interest is %f",compound);
return;
}

Output:
enter p t r 2000 5 10
2000 5 10
 simple intrest is 1000.000000
compound interest is 2000.000000