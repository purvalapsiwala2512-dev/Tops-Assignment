#include<stdio.h>
void getUserInitials(char name[]){
    printf("\n Initials: %c %c", name[0], name[6]);
}
int main()
{
    char cricketer[] = "Virat Kohli";

    getUserInitials(cricketer);

    return 0;
}
