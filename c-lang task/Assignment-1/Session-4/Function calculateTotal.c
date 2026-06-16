#include<stdio.h>
float calculateTotal(float itemPrice, int quantity){
    return itemPrice * quantity;
}

int main() {
    float total = calculateTotal(299.99, 3);
    printf("Total Bill Amount = %.2f\n", total);

    return 0;
}
