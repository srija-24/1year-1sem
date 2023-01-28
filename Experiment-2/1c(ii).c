#include<stdio.h>
int multipication(int m[10][10],int n[10][10],int a,int b, int l);
int main(){
    int i,j, r1,r2,c1,c2;
    int a[10][10];
    int b[10][10];
    int c[10][10];
    printf("enter the no of rows and columns in the first matrix\n");
    scanf("%d %d",&r1,&c1);
    printf("enter the no of rows and columns in the second matrix\n");
    scanf("%d %d",&r2,&c2);
    if(r1==c2){
    
    printf("enter the elements of the first matrix\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the elements of the second matrix\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }}
     else{
        printf("the matrices cannot be multiplied");
     }
    
    multipication(a,b,c1,r2,r1);

    return 0;
}

int multipication(int m[10][10],int n[10][10],int a,int b,int l){
    int i,j,k;
    int c[10][10];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            c[i][j]=0;
            for(k=0;k<l;k++){
                
                c[i][j]=c[i][j]+(m[i][k])*(n[k][j]);
                
            }
        }
    }
    
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

Output:
enter the no of rows and columns in the first matrix
2 2
enter the no of rows and columns in the second matrix
2 2
enter the elements of the first matrix
1 2 3 4
enter the elements of the second matrix
3 4 5 6
13	16	
29	36	
