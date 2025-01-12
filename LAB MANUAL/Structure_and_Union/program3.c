#include <stdio.h>
#include <string.h>

struct Cricket {
    char playerName[30];
    char teamName[20];
    float battingAverage;
};

int main() {
    struct Cricket players[50];
    int n, i, j;

    printf("Enter the number of players : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for player %d:\n", i + 1);
        printf("Player Name: ");
        scanf(" %[^\n]%*c", players[i].playerName);
        printf("Team Name: ");
        scanf(" %[^\n]%*c", players[i].teamName);
        printf("Batting Average: ");
        scanf("%f", &players[i].battingAverage);
    }

    char teams[5][50];
    int teamCount = 0;

    for (i = 0; i < n; i++) {
        int found = 0;
        for (j = 0; j < teamCount; j++) {
            if (strcmp(players[i].teamName, teams[j]) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(teams[teamCount], players[i].teamName);
            teamCount++;
        }
    }

    printf("\nTeam-wise list of players with batting averages:\n");
    for (i = 0; i < teamCount; i++) {
        printf("\nTeam: %s\n", teams[i]);
        printf("-----------------------------\n");
        for (j = 0; j < n; j++) {
            if (strcmp(players[j].teamName, teams[i]) == 0) {
                printf("Player: %s, Batting Average: %.2f\n", players[j].playerName, players[j].battingAverage);
            }
        }
    }

    return 0;
}
