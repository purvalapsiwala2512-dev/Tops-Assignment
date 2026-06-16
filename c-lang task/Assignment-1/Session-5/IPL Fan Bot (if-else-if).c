#include<stdio.h>
int main(){
    int choice;

    printf("Choose your favorite IPL team:\n");
    printf("1. Mumbai Indians\n");
    printf("2. Chennai Super Kings\n");
    printf("3. Royal Challengers Bengaluru\n");
    printf("4. Kolkata Knight Riders\n");
    printf("5. Rajasthan Royals\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Go Mumbai Indians!\n");
    else if (choice == 2)
        printf("Chennai Super Kings for the win!\n");
    else if (choice == 3)
        printf("Ee Sala Cup Namde!\n");
    else if (choice == 4)
        printf("Korbo Lorbo Jeetbo Re!\n");
    else if (choice == 5)
        printf("Halla Bol Rajasthan Royals!\n");
    else
        printf("Team not found!\n");

    return 0;
}
