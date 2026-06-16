#include<stdio.h>
int main(){
    float amount, finalAmount;

    printf("Enter Cart Amount: ");
    scanf("%f", &amount);

    finalAmount = amount;

    if (amount > 1000)
    {
        if (amount > 2000)
        {
            finalAmount = amount - (amount * 20 / 100);
        }
        else
        {
            finalAmount = amount - (amount * 10 / 100);
        }
    }

    printf("Final Amount to Pay = %.2f\n", finalAmount);

    return 0;
}
