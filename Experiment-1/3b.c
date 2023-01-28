#include<stdio.h>
void main()
{
int choice,a,b,c;
printf("enter a and b");
scanf("%d %d", &a, &b);
printf("1.Addition\n2.Subratction\n3.Multiplication\n4.Division\n5.Modulus");
scanf("%d", &choice);
switch(choice)
{
case 1:printf("Addition is %d",a+b);
break;
case 2:printf("Subtraction is %d",a-b);
break;
case 3:printf("Multiplication is %d",a*b);
break;
case 4:printf("Division is %d",a/b);
break;
case 5:printf("Mod is %d",a%b);
break;
default:printf("enter choice between 1 to 5");
break;
}
return;
}

Output:
enter a and b 40 20
40 20
1.Addition
2.Subratction
3.Multiplication
4.Division
5.Modulus
2
Subtraction is 20