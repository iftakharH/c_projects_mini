// check if the given year is leap year or not

#include <stdio.h>
#include <stdbool.h>

bool check(int year)
{
    if (year %400 == 0)
    return true;

    else if (year % 100 == 0)
    return false;

    else if (year % 4 == 0)
    return true;

    return false;
}

int main()
{
    int year;
    
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if (check(year))
    {
        printf ("%d is a Leap year", year);
    }

    else 
    {
        printf ("%d is not a Leap year", year);
    }

    return 0;
}