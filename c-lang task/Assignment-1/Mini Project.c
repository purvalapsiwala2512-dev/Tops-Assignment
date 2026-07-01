#include <stdio.h>
#define DAYS 7
void logMusic(int minutes[]){
    FILE *fp;
    int i;

    fp = fopen("music_log.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter listening minutes for 7 days:\n");

    for(i = 0; i < DAYS; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%d", &minutes[i]);

        fprintf(fp, "%d\n", minutes[i]);
    }

    fclose(fp);

    printf("Data saved successfully.\n");
}

void viewSummary(int minutes[])
{
    int i;

    printf("\nWeekly Summary:\n");

    for(i = 0; i < DAYS; i++)
    {
        printf("Day %d : %d minutes\n", i + 1, minutes[i]);
    }
}

void generateReport()
{
    FILE *fp;
    int minutes;
    int total = 0;
    int highest = 0;
    int count = 0;

    fp = fopen("music_log.txt", "r");

    if(fp == NULL)
    {
        printf("No data found.\n");
        return;
    }

    while(fscanf(fp, "%d", &minutes) == 1)
    {
        total += minutes;

        if(minutes > highest)
        {
            highest = minutes;
        }

        count++;
    }

    fclose(fp);

    if(count == 0)
    {
        printf("No data available.\n");
        return;
    }

    printf("\nWeekly Report\n");
    printf("-------------\n");
    printf("Total Minutes   : %d\n", total);
    printf("Average Minutes : %.2f\n", (float)total / count);
    printf("Highest Minutes : %d\n", highest);
}

void resetData(int minutes[])
{
    FILE *fp;
    int i;
    char choice;

    printf("Are you sure you want to reset all data? (Y/N): ");
    scanf(" %c", &choice);

    if(choice == 'Y' || choice == 'y')
    {
        for(i = 0; i < DAYS; i++)
        {
            minutes[i] = 0;
        }

        fp = fopen("music_log.txt", "w");

        if(fp != NULL)
        {
            fclose(fp);
        }

        printf("Data reset successfully.\n");
    }
    else
    {
        printf("Reset cancelled.\n");
    }
}

int main()
{
    int minutes[DAYS] = {0};
    int choice;

    do
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Generate Weekly Report\n");
        printf("4. Reset Data\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                logMusic(minutes);
                break;

            case 2:
                viewSummary(minutes);
                break;

            case 3:
                generateReport();
                break;

            case 4:
                resetData(minutes);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}
