#include<stdio.h>
int main(){
    int guess;

    printf("Guess the Song!\n");
    printf("1. Shape of You\n");
    printf("2. Believer\n");
    printf("3. Perfect\n");

    do
    {
        printf("Enter your guess (1-3): ");
        scanf("%d", &guess);

        if(guess != 2)
        {
            printf("Wrong Guess! Try Again.\n");
        }

    } while(guess != 2);

    printf("Correct! The song was Believer.\n");

    return 0;
}
