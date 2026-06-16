#include<stdio.h>
int main(){
    const float GST_RATE = 0.18f; // 18% GST

    float basePrice = 500.0f;
    float finalPrice = basePrice + (basePrice * GST_RATE);

    printf("Base Price: Rs %.2f\n", basePrice);
    printf("GST Rate: %.0f%%\n", GST_RATE * 100);
    printf("Final Price: Rs %.2f\n", finalPrice);

    return 0;
}
