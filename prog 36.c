// Write a program to find the sum of the even numbers from 1 to 10 using while loop.

#include <stdio.h>

int main() {
    int num = 1; // Initialize num to 1
    int sum = 0; // Initialize sum to 0

    while (num <= 10) {
        if (num % 2 == 0) {
            sum += num; // Add even number to sum
        }
        num++; // Move to the next number
    }

    printf("The sum of even numbers from 1 to 10 is: %d\n", sum);

    return 0;
}

