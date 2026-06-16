#include<stdio.h>
int main(){
    int meal;

    printf("Select Meal Time:\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");
    printf("Enter choice: ");
    scanf("%d", &meal);

    switch (meal)
    {
        case 1:
            printf("Suggested Dish: Poha\n");
            break;
        case 2:
            printf("Suggested Dish: Veg Thali\n");
            break;
        case 3:
            printf("Suggested Dish: Paneer Butter Masala\n");
            break;
        case 4:
            printf("Suggested Dish: Samosa\n");
            break;
        default:
            printf("Try some fruits!\n");
    }

    return 0;
}
