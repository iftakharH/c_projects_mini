//Check if a character is a vowel or consonant using if-else statement

#include <stdio.h>

int main ()
{
    char c;
    
    printf("Enter an Alphabet:  ");
    scanf("%c", &c);
    
    
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E'|| c == 'i' || c == 'I' || c == 'o' || c == 'O'|| c == 'u' || c == 'U')
    {
        printf("%c is a Vowel.", c);
    }
    else
    {
        printf("%c is a Consonant.", c);
    }

    
    return 0;
}
