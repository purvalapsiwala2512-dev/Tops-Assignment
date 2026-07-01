#include <stdio.h>
// Function to check whether a number is even
int isEven(int num)
{
    // If remainder after division by 2 is 0,
    // the number is even
    if(num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number = 8;

    if(isEven(number))
    {
        printf("%d is Even\n", number);
    }
    else
    {
        printf("%d is Odd\n", number);
    }

    return 0;
}
