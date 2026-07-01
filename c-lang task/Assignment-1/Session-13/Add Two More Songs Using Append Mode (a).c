#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    fprintf(fp, "Love Story\n");
    fprintf(fp, "I Will Always Love You\n");

    fclose(fp);

    printf("Songs appended successfully.\n");

    return 0;
}
