#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 100
#define NAME_LENGTH 50

typedef struct
{
    int id;
    char name[NAME_LENGTH];
} Player;

Player players[MAX_PLAYERS];
int player_count = 0;

void show_menu()
{
    printf("\nPlayer Management System\n");
    printf("1. Show Player List\n");
    printf("2. Add Player\n");
    printf("3. Delete Player\n");
    printf("4. Edit Player\n");
    printf("5. Exit\n");
    printf("Select an option: ");
}

void show_players()
{
    printf("\nList of Players:\n");
    for (int i = 0; i < player_count; i++)
    {
        printf("%d. %s\n", players[i].id, players[i].name);
    }
}

void add_player()
{
    if (player_count < MAX_PLAYERS)
    {
        Player new_player;
        new_player.id = player_count + 1;
        printf("Enter player name: ");
        scanf(" %[^\n]", new_player.name);
        players[player_count] = new_player;
        player_count++;
        printf("Player added successfully.\n");
    }
    else
    {
        printf("Player list is full.\n");
    }
}

void delete_player()
{
    int id;
    printf("Enter player ID to delete: ");
    scanf("%d", &id);
    if (id > 0 && id <= player_count)
    {
        for (int i = id - 1; i < player_count - 1; i++)
        {
            players[i] = players[i + 1];
        }
        player_count--;
        printf("Player deleted successfully.\n");
    }
    else
    {
        printf("Invalid player ID.\n");
    }
}

void edit_player()
{
    int id;
    printf("Enter player ID to edit: ");
    scanf("%d", &id);
    if (id > 0 && id <= player_count)
    {
        printf("Enter new name for player %d: ", id);
        scanf(" %[^\n]", players[id - 1].name);
        printf("Player edited successfully.\n");
    }
    else
    {
        printf("Invalid player ID.\n");
    }
}

int main()
{
    int option;
    while (1)
    {
        show_menu();
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            show_players();
            break;
        case 2:
            add_player();
            break;
        case 3:
            delete_player();
            break;
        case 4:
            edit_player();
            break;
        case 5:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid option. Please try again.\n");
        }
    }
    return 0;
}
