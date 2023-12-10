#include <stdio.h>

int countDigits(int num) 
{
    int count = 0;
    do
	{
        num /= 10;
        count++;
    } while (num != 0);
    return count;
}

int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int digitsCount = countDigits(number);
    printf("The number of digits in %d is %d.", number, digitsCount);

    return 0;
}

