#include<stdio.h>
int main() {
    int arr[10], max, min;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (i == 0) max = min = arr[0];
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Max: %d, Min: %d", max, min);
}
