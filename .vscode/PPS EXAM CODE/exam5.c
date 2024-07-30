//while loop control structure
//1. Write a program that calculates 
//the sum of the digits of a entered number 
//and display the sum.
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}