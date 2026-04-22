#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 11 == 0){
        printf("\n Divisible by both 5 and 11.");
    }
    else{
        printf("\n Not divisible by both.");
}
}
