#include <stdio.h>
int main() {
    double n1, n2;
    char op;
    printf("Enter first number, operator (+, -, *, /, %%): ");
    scanf("%lf %c %lf", &n1, &op, &n2);

    if (op == '+') printf("%.2f", n1 + n2);
    else if (op == '-') printf("%.2f", n1 - n2);
    else if (op == '*') printf("%.2f", n1 * n2);
    else if (op == '/') n2 != 0 ? printf("%.2f", n1 / n2) : printf("Error: Div by 0");
    else if (op == '%') printf("%d", (int)n1 % (int)n2);
    else printf("Invalid Operator!");
    return 0;
}
