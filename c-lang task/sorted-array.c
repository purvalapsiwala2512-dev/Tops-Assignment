#include<stdio.h>

int main() {
    int a[5] = {23, 34, 56, 76, 54};
    int i, j, temp;

    // Sorting Logic (Selection Sort)
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            // Change '>' to '<' if you want descending order
            if(a[i] <  a[j]) {
                // Classic swap using a temporary variable
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    printf("Sorted Array:");
    for(i = 0; i < 5; i++) {
        printf("\n a[%d] = %d", i, a[i]);
    }
}
