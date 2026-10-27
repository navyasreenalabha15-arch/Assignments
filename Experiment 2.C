#include <stdio.h>

int main() {
    
    double length, width, area, perimeter;

    
    printf("Enter the length of the rectangle: ");
    if (scanf("%lf", &length) != 1 || length <= 0) {
        printf("Error: Please enter a valid positive number for length.\n");
        return 1;
    }

    printf("Enter the width of the rectangle: ");
    if (scanf("%lf", &width) != 1 || width <= 0) {
        printf("Error: Please enter a valid positive number for width.\n");
        return 1;
    }

    
    area = length * width;
    perimeter = 2 * (length + width);

    
    printf("\n--- Results ---\n");
    printf("Area of the rectangle      = %.2lf\n", area);
    printf("Perimeter of the rectangle = %.2lf\n", perimeter);

    return 0;
}
