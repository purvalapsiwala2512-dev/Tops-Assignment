#include <stdio.h>
main() {
    int i, j;

    for(i = 1; i <= 10; i++) {       // rows (1 to 10)
        for(j = 1; j <= 5; j++) {    // tables (1 to 5)
            printf("%d * %d = %d \t", j, i, j * i);
        }
        printf("\n"); // next line after one row
    }
}
