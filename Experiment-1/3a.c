#include<stdio.h>
#include<math.h>
int main()
{
int v=0,s=3,i;
float t,acc=9.8;
for(i=1;i<=10;i++,s=s+3)
{
t=sqrt((2*s-2*v*t)/acc);
printf("Time taken at floor %d is %f\n",i,t);
}
return 0;
}

output:
Time taken at floor 1 is 0.782461
Time taken at floor 2 is 1.106567
Time taken at floor 3 is 1.355262
Time taken at floor 4 is 1.564922
Time taken at floor 5 is 1.749636
Time taken at floor 6 is 1.916630
Time taken at floor 7 is 2.070197
Time taken at floor 8 is 2.213133
Time taken at floor 9 is 2.347382
Time taken at floor 10 is 2.474358
