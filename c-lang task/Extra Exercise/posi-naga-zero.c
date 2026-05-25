#include<stdio.h>
int main(){
    double num;
    printf("Enter the number");
    scanf("%lf", &num);

    if (num > 0){
        printf("\n Positive");
    }
    else if (num < 0){
        printf("\n Negative");
    }
    else{
        printf("\n Zero");
}   
}
