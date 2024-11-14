#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    char letter[10];  // This can hold multiple characters like "exit"
    int found;

    // Input text
    printf("Ange en text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;  // Remove newline character

    while (1) {
        found = 0;  // Reset found flag for each new search

        // Input letter or command to exit
        printf("Ange en bokstav (eller skriv 'exit' för att avsluta): ");
        scanf("%s", letter);

        // Check if the user wants to exit
        if (strcmp(letter, "exit") == 0) {
            printf("Programmet avslutas.\n");
            break;
        }

        // Validate the input is a single character
        if (strlen(letter) != 1) {
            printf("Ange endast en bokstav, tack.\n");
            continue;
        }

        // Search for the letter in the text
        for (int i = 0; i < strlen(text); i++) {
            if (text[i] == letter[0]) {
                printf("Det första stället jag hittade %c på var position %d\n", letter[0], i);
                found = 1;
                break;
            }
        }

        // If the letter is not found
        if (!found) {
            printf("Det finns inget %c i texten du matade in\n", letter[0]);
        }
    }

    return 0;
}
