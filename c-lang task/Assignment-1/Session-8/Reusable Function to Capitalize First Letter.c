#include<stdio.h>
void capitalizeFirstLetter(char str[]){
    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] = str[0] - 32;
    }
}
int main(){
    char productName[] = "laptop";
    char userName[] = "virat";

    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(userName);

    printf("Product: %s\n", productName);
    printf("Username: %s\n", userName);

    return 0;
}
