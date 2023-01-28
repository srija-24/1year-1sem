#include<stdio.h>
int addition(int m[10][10],int n[10][10],int a,int b);
int transpose(int m[10][10], int a, int b);
int main(){
    int i,j, r1,r2,c1,c2;
    int a[10][10];
    int b[10][10];
    int c[10][10];
    printf("enter the no of rows and columns in the first matrix\n");
    scanf("%d %d",&r1,&c1);
    
    printf("enter the elements of the first matrix\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }

   
     transpose( a,c1,r1);
    
    
    return 0;
}
int transpose(int m[10][10],int a,int b){
    int i,j;
    int x[10][10];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
         x[i][j]=m[j][i];       
    }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}

Output:
enter the no of rows and columns in the first matrix
2 2
enter the elements of the first matrix
1 2 3 4
1	3	
2	4	
