/*** C program to check positive negative 
 * or zero using simple if statement */

#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if (num>0)
    printf("The given no. is positive");
    if (num<0)
    printf("The given no. is negative");
    if (num==0)
    printf("the given no. is zero");

}