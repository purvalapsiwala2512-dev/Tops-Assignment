#include<stdio.h>
float calculateAverage(int orders[], int size){
    int i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum += orders[i];
    }

    return (float)sum / size;
}
int main()
{
    int weeklyOrders[7] = {250, 300, 450, 200, 500, 350, 400};

    printf("Average Weekly Spend = %f\n",
           calculateAverage(weeklyOrders, 7));

    return 0;
}
