#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("%s\n", (n % 2 == 0) ? "Even" : "Odd");
    
    if (n > 0) printf("Positive\n");
    else if (n < 0) printf("Negative\n");
    else printf("Zero\n");

    if (n % 3 == 0 && n % 5 == 0) printf("Multiple of 3 and 5\n");
}
