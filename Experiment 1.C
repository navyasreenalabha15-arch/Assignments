#include <stdio.h>

int main() {
    double number;

    
    printf("Enter a number: ");
    scanf("%lf", &number);

    
    if (number > 0.0) {
        printf("The number is positive.\n");
    } 
    else if (number < 0.0) {
        printf("The number is negative.\n");
    } 
    else {
        printf("The number is zero.\n");
    }

    return 0;
}
