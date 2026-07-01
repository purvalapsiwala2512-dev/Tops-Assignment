#include<stdio.h>
int main()
{
    int orders[5] = {250, 400, 150, 600, 350};
    int *ptr = orders;
    int i;

    for(i = 0; i < 5; i++){
        printf("Order Amount = %d, Address = %p\n",
               *(ptr + i),
               (void *)(ptr + i));
    }

    return 0;
}
