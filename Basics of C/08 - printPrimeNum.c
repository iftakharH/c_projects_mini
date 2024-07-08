// Print Prime Number From 1 to N

#include <stdio.h>
#include <stdbool.h>

int prime( int n)
{
    if (n==1 || n==0)
    return false;

    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        return false;
    }
}


int main()
{
    int N, i, j;
    printf("Enter the number: ");
    scanf("%d", &N);

    for ( i=1; i<= N; i++ )
    {
        if ( prime (i))
        printf(" %d ", i);
    }
    return 0;
}