#include<stdio.h>
int main(){
    int playlistRatings[3][5] ={
        {4, 5, 4, 3, 5},
        {5, 5, 4, 4, 5},
        {3, 4, 5, 4, 4}
    };

    int day;

    printf("Ratings for Playlist 2:\n");

    for(day = 0; day < 5; day++)
    {
        printf("Day %d: %d\n", day + 1, playlistRatings[1][day]);
    }

    return 0;
}
