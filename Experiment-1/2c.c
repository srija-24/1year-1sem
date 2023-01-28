#include<stdio.h>
void main()
{ 
int perc;
printf("enter percentage");
scanf("%d", &perc);
if(perc>=70)
printf("Distinction\n");
else if(perc>=60 && perc<70)
printf("First Class\n");
else if(perc>=40 && perc<60)
printf("Second Class\n");
else
printf("Fail\n");
printf("Percentage obtained is %d",perc);
return;
}

Output:
enter percentage 90
Distinction
Percentage obtained is 90
