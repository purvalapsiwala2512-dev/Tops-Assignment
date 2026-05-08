#include <stdio.h>

int main() {
	int i,j,k;
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    for (i=0;i<2;i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (k=0;k<2;k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant Matrix A x B:\n");
    for (i=0; i<2;i++) {
        for (j=0;j<2;j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}
