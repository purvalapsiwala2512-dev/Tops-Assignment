#include<stdio.h>
int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    (num % 2 == 0)? printf("\n %d is even.", num): printf("\n %d is odd.", num);
}
