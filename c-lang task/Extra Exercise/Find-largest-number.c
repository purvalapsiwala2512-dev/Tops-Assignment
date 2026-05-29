#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    if (num1 > num2){
        printf("\n %d is the largest.",num1);
    }
    else if (num1 < num2){
        printf("\n %d is the largest.",num2);
    }
    else{
        printf("\n Both numbers are equal.");
}
}
