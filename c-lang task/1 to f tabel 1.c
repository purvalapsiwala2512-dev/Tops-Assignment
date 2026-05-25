#include<stdio.h>
main() {
    int i, j;
    for(i=1;i<=10;i++){
        for(j=1;j<=5;j++){
        printf("\t %d * %d =%d",j,i,j*i);
        }
        printf("\n");
    }
}
