// print alphabets from (A-Z) and (a-z) using for loops

#include <stdio.h>

int main()
{
    char i;


    printf ("The Alphabets from A to Z are: \n");

    for (i = 'A'; i <= 'Z'; i++)
    {
        printf ("%c ", i);
    }
    
    
    printf ("\n\nThe Alphabets from a to z are: \n");
    
    for (i = 'a'; i <= 'z'; i++)
    {
        printf ("%c ", i);
    }
    return 0;
}