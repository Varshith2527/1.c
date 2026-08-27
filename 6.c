#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("\n Enter the temperature in fahrenheit: ");
    scanf("%f", &fahrenheit) ;
    celsius = (0.56) * (fahrenheit - 32);
    printf("\n Temperature in degrees celsius = %f", celsius);
    return 0;
}
