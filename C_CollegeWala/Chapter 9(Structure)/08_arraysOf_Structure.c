/*
S. No.	Name	Age |Test Matches Played | Average Runs per Match
1	Virat Kohli	36	110	 53.75
2	Steve Smith	35	100	61.20
3	Joe Root	34	125	51.50
4	Kane Williamson	34	95	54.45
5	Babar Azam	30	50	48.25
6	Marnus Labuschagne	31	45	57.30
7	David Warner	37	105	46.90
8	Ben Stokes	33	90	38.75
9	Rohit Sharma	36	85	47.15
10	Shubman Gill	26	35	46.25
*/

#include <stdio.h>
#include <string.h>
typedef struct cricketers{
    char firstName[20];
    char lastName[20];
    int age;
    int total_matches;
    float avg_runs;
} cricketers;
int main(){
    cricketers player[10];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Name of player : \n");
        scanf("%s",player[i].firstName);
        scanf("%s",player[i].lastName);
        printf("Enter Age of Player : \n");
        scanf("%d",&player[i].age);
        printf("Enter total Matches of player : \n");
        scanf("%d",&player[i].total_matches);
        printf("Enter Average runs of player : \n");
        scanf("%f",&player[i].avg_runs);
        printf("\n");
    }
    
    printf("- - - Player Detail - - -\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name : %s %s\n",player[i].firstName,player[i].lastName);
        printf("Age : %d\n",player[i].age);
        printf("Total Matches : %d\n",player[i].total_matches);
        printf("Avrage Runs : %0.2f\n",player[i].avg_runs);
        printf("\n");
    }
    
    return 0;
}