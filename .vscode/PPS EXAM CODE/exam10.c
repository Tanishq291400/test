/** * C program to check Leap Year*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year to check the given year is leap year or not");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("The given No is Leap Year");
    }
    else{
        printf("The given No is not leap year");
    }
       }

