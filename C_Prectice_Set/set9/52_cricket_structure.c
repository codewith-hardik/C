// Define a structure called cricket that will describe the following information: Player
// name, Team name, Batting average. Using cricket, read the information about 5
// players and print list containing names of players with their batting average 

#include <stdio.h>

// Define structure
struct cricket {
    char playerName[50];
    char teamName[50];
    float battingAverage;
};

int main() {
    struct cricket players[5];  // Array of 5 players

    // Input details
    printf("Enter details of 5 players:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Enter player name: ");
        scanf("%s", players[i].playerName);

        printf("Enter team name: ");
        scanf("%s", players[i].teamName);

        printf("Enter batting average: ");
        scanf("%f", &players[i].battingAverage);
    }

    // Display player names and batting averages
    printf("\n--- Player Batting Averages ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Player: %s, Batting Average: %.2f\n", players[i].playerName, players[i].battingAverage);
    }

    return 0;
}
