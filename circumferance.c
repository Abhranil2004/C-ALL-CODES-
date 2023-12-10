#include <stdio.h>

int main() {
    // Declare variables
    float radius, area, circumference;
    const float PI = 3.14159;

    // Get user input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}
