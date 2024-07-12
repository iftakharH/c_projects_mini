// C program to find factorial of inputted number
#include <stdio.h>


unsigned int factorial(unsigned int n)
{
	if (n == 1) {
	return 1;
	}

	return n * factorial(n - 1);
}


int main()
{
	int num;
    printf("Enter a number: ");
    scanf("%d", &num);

	printf("Factorial of %d is %d", num, factorial(num));

	return 0;
}
