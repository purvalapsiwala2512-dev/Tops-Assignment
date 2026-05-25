#include<stdio.h>
int main() {
    int age;
    printf("Enter your age");
    scanf("%d",&age);

    if (age >= 18){
        printf("\n You are eligible for vote.");
    }
    else{
        printf("\n You are not eligible for vote.");
}
}
