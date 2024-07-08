
#include <stdio.h>

// C Program to check for prime number using Simple Approach.


void primeNum(int n)
{
    int flag = 1;           // initially, flag is set to true or 1

    for (int i = 2; i <= n / 2; i++) 
    {                           // loop to iterate through 2 to n/2
        if (n % i == 0) {       // if n is perfectly divisible by i
            flag = 0;           // flag is set to 0 i.e false
            break;
        }
    }

    if (flag) {
        printf("The number %d is a Prime Number\n", n);
    }
    else {
        printf("The number %d is not a Prime Number\n", n);
    }

    return;
}


int main()
{
    int n;

    printf("Enter a number to check prime or not: \n");
    scanf("%d", &n);

    primeNum(n);

    return 0;
}
