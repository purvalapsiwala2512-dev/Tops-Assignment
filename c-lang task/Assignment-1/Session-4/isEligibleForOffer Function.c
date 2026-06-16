#include<stdio.h>
int isEligibleForOffer(int age, float orderValue)
{
    return (age >= 18 && orderValue > 500);
}

int main(){
    int age = 21;
    float orderValue = 750;

    if (isEligibleForOffer(age, orderValue))
        printf("Eligible for Offer\n");
    else
        printf("Not Eligible for Offer\n");

    return 0;
}
