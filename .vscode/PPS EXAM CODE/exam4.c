//Write a program that calculates the area of circle, area of triangle, area of square using switch statement.
#include <stdio.h>

int main() {
    int choice;
    double radius, side, base, height, area;

    printf("Choose a shape (1 for circle, 2 for triangle, 3 for square): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            area = 3.14159 * radius * radius;
            printf("The area of the circle is: %.2lf\n", area);
            break;
        case 2:
            printf("Enter the base of the triangle: ");
            scanf("%lf", &base);
            printf("Enter the height of the triangle: ");
            scanf("%lf", &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is: %.2lf\n", area);
            break;
        case 3:
            printf("Enter the side of the square: ");
            scanf("%lf", &side);
            area = side * side;
            printf("The area of the square is: %.2lf\n", area);
            break;
        default:
            printf("Invalid choice. Please choose a valid shape.\n");
            break;
    }

    return 0;
}