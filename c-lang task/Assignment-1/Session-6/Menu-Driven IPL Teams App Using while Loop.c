#include<stdio.h>
int main(){
    int choice = 0;
    int newTeam;

    while(choice != 3)
    {
        printf("\n--- IPL Team Menu ---\n");
        printf("1. View Favorite Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("1. Mumbai Indians\n");
            printf("2. Chennai Super Kings\n");
            printf("3. Royal Challengers Bengaluru\n");
        }
        else if(choice == 2)
        {
            printf("Enter Team Number to Add: ");
            scanf("%d", &newTeam);
            printf("Team Added Successfully!\n");
        }
        else if(choice == 3)
        {
            printf("Exiting Program...\n");
        }
        else
        {
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}
