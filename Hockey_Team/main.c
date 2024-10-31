#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    int shirt_number;
} Player;

void addPlayer(FILE *file, Player player) {
    fseek(file, 0, SEEK_END);  // Move to the end of the file
    fprintf(file, "%s,%d,%d\n", player.name, player.age, player.shirt_number);
}

void listPlayers(FILE *file) {
    fseek(file, 0, SEEK_SET);  // Move to the start of the file
    Player player;
    char line[1024];

    printf("Name\tAge\tShirt Number\n");
    printf("--------------------------\n");
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%[^,],%d,%d", player.name, &player.age, &player.shirt_number);
        printf("%s\t%d\t%d\n", player.name, player.age, player.shirt_number);
    }
}

void updatePlayer(FILE *file, char *name, int new_age, int new_shirt_number) {
    FILE *temp = fopen("temp.csv", "w");
    Player player;
    char line[1024];
    
    fseek(file, 0, SEEK_SET);  // Move to the start of the file
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%[^,],%d,%d", player.name, &player.age, &player.shirt_number);
        if (strcmp(player.name, name) == 0) {
            fprintf(temp, "%s,%d,%d\n", player.name, new_age, new_shirt_number);
        } else {
            fprintf(temp, "%s,%d,%d\n", player.name, player.age, player.shirt_number);
        }
    }
    
    fclose(file);
    fclose(temp);
    remove("players.csv");
    rename("temp.csv", "players.csv");
}

void deletePlayer(FILE *file, char *name) {
    FILE *temp = fopen("temp.csv", "w");
    Player player;
    char line[1024];
    
    fseek(file, 0, SEEK_SET);  // Move to the start of the file
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%[^,],%d,%d", player.name, &player.age, &player.shirt_number);
        if (strcmp(player.name, name) != 0) {
            fprintf(temp, "%s,%d,%d\n", player.name, player.age, player.shirt_number);
        }
    }
    
    fclose(file);
    fclose(temp);
    remove("players.csv");
    rename("temp.csv", "players.csv");
}

int main() {
    FILE *file = fopen("players.csv", "a+");

    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    Player p1 = {"Ali", 25, 10};
    Player p2 = {"Reza", 30, 7};
    Player p3 = {"Sara", 22, 15};

    // Add players
    addPlayer(file, p1);
    addPlayer(file, p2);
    addPlayer(file, p3);

    // List players
    printf("List of players:\n");
    listPlayers(file);

    // Update player
    printf("\nUpdating Reza's information:\n");
    fclose(file);  // Close and reopen to flush data
    file = fopen("players.csv", "r+");
    updatePlayer(file, "Reza", 32, 17);

    // Re-open the file for reading after updating
    fclose(file);
    file = fopen("players.csv", "r");
    listPlayers(file);

    // Delete player
    printf("\nDeleting Ali from the list:\n");
    fclose(file);  // Close and reopen to flush data
    file = fopen("players.csv", "r+");
    deletePlayer(file, "Ali");

    // Re-open the file for reading after deleting
    fclose(file);
    file = fopen("players.csv", "r");
    listPlayers(file);

    fclose(file);
    return 0;
}