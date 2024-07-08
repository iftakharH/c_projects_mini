#include <stdio.h>


//building a fuction to convert

float fahrenheitToCelcius (float f)
{
    return (f - 32.0) * 5.0 / 9.0 ;
}


int main()
{
    float  f;
    
    printf("Enter a temperature in Fahrenheit: ");

    scanf("%f", &f);

    float c = fahrenheitToCelcius (f); // call the fuction in the main function

    printf("The temperature in Celcius is: %0.3f\n", c);

    return 0;
}
