#include<stdio.h>
int main(){
int arr[50];
int min;
int n,i,sum=0;
int max;
printf("enter the number of elements in the array\n");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=1;i<n;i++){
    //for maximum
    if(arr[i]>max){
        max=arr[i];
        }
    //for minimum    
    if(arr[i]<min){
        min=arr[i];
        }}
    //for summation and average
    for(i=0;i<n;i++){    
    sum=sum+arr[i];   
        }
   int average;
   average=sum/n;
   printf("the min of the given array elements is %d\n",min);     
   printf("the max of the given array elements is %d\n",max);     
   printf("the average of the given array elements is %d\n",average); 
   
   return 0;
   }    

Output:
enter the number of elements in the array
4
enter the array elements 20 30 4 5
20 30 4 5
the min of the given array elements is 4
the max of the given array elements is 30
the average of the given array elements is 14
