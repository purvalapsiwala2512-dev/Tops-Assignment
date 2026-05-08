#include <stdio.h>
int main() {
    int m;
    printf("Enter marks: ");
    scanf("%d",&m);

    if (m > 90) printf("Grade A");
    else if (m > 75) printf("Grade B");
    else if (m > 50) printf("Grade C");
    else printf("Grade D");
}
