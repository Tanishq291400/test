/*program to calculate average of n numbers.*/
#include<stdio.h>
int main(){
    int n,i;
    float sum=0.0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++){
        printf("enter the element %d:",i+1);
        scanf("%f",&a[i]);
        sum=sum+a[i];
        }
        printf("the average of the numbers is:%f",sum/n);
        return 0;
}