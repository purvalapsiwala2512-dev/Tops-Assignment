#include<stdio.h>
int main()
{
    int cricketScores[4][2] =
    {
        {185, 178},
        {210, 195},
        {165, 170},
        {220, 205}
    };

    int match, highest;

    for(match = 0; match < 4; match++)
    {
        if(cricketScores[match][0] > cricketScores[match][1])
            highest = cricketScores[match][0];
        else
            highest = cricketScores[match][1];

        printf("Match %d Highest Score = %d\n",
               match + 1, highest);
    }

    return 0;
}
