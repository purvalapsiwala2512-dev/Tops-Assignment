#include <stdio.h>
int main() {
   float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    

    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

  
    printf("\n %.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

     int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
}
