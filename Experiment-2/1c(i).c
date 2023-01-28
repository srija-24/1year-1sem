#include<stdio.h>
void addition(int m[10][10],int n[10][10],int a ,int b);
int main(){
int i,j,r1,c1,r2,c2;
int a[10][10];
int b[10][10];
printf("enter the number of rows and columns of the first matrix");
scanf("%d %d",&r1,&c1);
printf("enter the number of rows and columns of the second matrix");
scanf("%d %d",&r2,&c2);
printf("enter the elements of the first matrix");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
        }}

printf("enter the elements of the second matrix");
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
        scanf("%d",&b[i][j]);
        }}
        
addition(a,b,r1,c1);

return 0;
}

void addition(int m[10][10],int n[10][10],int a ,int b){
     int i,j;
     int c[10][10];
     for(i=0;i<a;i++){
         for(j=0;j<b;j++){
            c[i][j]=m[i][j]+n[i][j];
            }}
     printf("the sum of the two matrices is\n");
         for(i=0;i<a;i++){
             for(j=0;j<b;j++){
              printf("%d",c[i][j]);
              }
              printf("\n");
              }
              return ;}

Output:
enter the number of rows and columns of the first matrix2 2
enter the number of rows and columns of the second matrix2 2
enter the elements of the first matrix1 2 3 4
enter the elements of the second matrix2 3 4 5
the sum of the two matrices is
35
79
