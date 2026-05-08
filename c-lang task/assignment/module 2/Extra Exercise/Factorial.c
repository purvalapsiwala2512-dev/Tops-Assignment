#include <stdio.h>
int factRec(int n) { return (n <= 1) ? 1 : n * factRec(n - 1); }

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial: %d", factRec(n));
}
