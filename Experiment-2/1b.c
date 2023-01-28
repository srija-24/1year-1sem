#include<stdio.h>
#include<math.h>

int mean(int arr[],int n);
int variance(int mean,int arr[],int n);
int standard(int variance);
int main(){
int n;
int i;
int arr[50];
printf("enter the number of array elements\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }
   int mean1= mean(arr, n);
   int variance1= variance(mean1,arr,n);
   int standard1= standard(variance1);
  printf("the mean of array elements is %d\n",mean1);
  printf("the variance of array elements is %d\n",variance1);
  printf("the standard deviation of array elements is %d\n",standard1);
return 0;}

int mean(int arr[],int n){
    int sum=0;
    int i;
    for(i=0;i<n;i++){
        sum =sum+arr[i];
        }
     return sum/n;}

int variance(int mean,int arr[],int n){
int sum=0;
   for(int i=0;i<n;i++){
   sum=sum+pow((arr[i]-mean),2);
}
return sum/(float)n;} 

  int standard(int variance){
  int standard=sqrt(variance);
  return standard;}    

Output:
enter the number of array elements
4
enter the array elements
10 20 30 25
the mean of array elements is 21
the variance of array elements is 54
the standard deviation of array elements is 7
