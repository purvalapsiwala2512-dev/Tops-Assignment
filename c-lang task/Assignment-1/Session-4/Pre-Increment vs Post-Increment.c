#include<stdio.h>
int main(){
    int followerCount = 100;

    printf("Initial Value = %d\n", followerCount);

    printf("Pre-Increment (++followerCount) = %d\n", ++followerCount);
    printf("Value After Pre-Increment = %d\n", followerCount);

    printf("Post-Increment (followerCount++) = %d\n", followerCount++);
    printf("Value After Post-Increment = %d\n", followerCount);

    return 0;
}
