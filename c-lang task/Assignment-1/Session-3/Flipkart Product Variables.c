#include<stdio.h>
int main(){
    char productName[] = "Samsung Galaxy M31";  // string
    float price = 14999.99f;                    // float
    double rating = 4.5;                        // double

    printf("productName (string): %s\n", productName);
    printf("price (float): %.2f\n", price);
    printf("rating (double): %.1lf\n", rating);

    return 0;
}
