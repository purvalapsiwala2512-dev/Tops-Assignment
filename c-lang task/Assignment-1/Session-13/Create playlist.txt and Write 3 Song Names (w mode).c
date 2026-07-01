#include<stdio.h>
int main(){
    FILE *fp;

    fp = fopen("playlist.txt", "w");

    fprintf(fp, "Tum Hi Ho\n");
    fprintf(fp, "Kesariya\n");
    fprintf(fp, "Perfect\n");

    fclose(fp);

    printf("Songs written successfully.\n");

    return 0;
}
