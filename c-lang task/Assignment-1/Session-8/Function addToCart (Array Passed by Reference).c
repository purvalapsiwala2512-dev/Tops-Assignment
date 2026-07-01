#include<stdio.h>
void addToCart(char cart[][20], int *count, char product[]){
    int i = 0;

    while(product[i] != '\0')
    {
        cart[*count][i] = product[i];
        i++;
    }

    cart[*count][i] = '\0';
    (*count)++;

    printf("Updated Cart:\n");
    for(i = 0; i < *count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

int main()
{
    char cart[10][20] = {"Mobile", "Headphones"};
    int count = 2;

    addToCart(cart, &count, "Charger");

    printf("\nCart After Function Call:\n");
    for(int i = 0; i < count; i++)
    {
        printf("%s\n", cart[i]);
    }

    return 0;
}
