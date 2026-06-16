#include<stdio.h>
float calculateFinalPrice(float price, float discountPercent, int isMember)
{
    float finalPrice = price - (price * discountPercent / 100);

    if (isMember)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    return finalPrice;
}

int main(){
    float price = 2000;
    float discount = 20;
    int isMember = 1;

    printf("Final Price = %f\n", calculateFinalPrice(price, discount, isMember));

    return 0;
}
