#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables for three input strings and the final concatenated string
    char text1[20];
    char text2[20];
    char text3[20];
    char textTotal[62];  // Buffer large enough to hold all three strings with spaces

    // Prompt the user to enter three texts, using fgets to capture spaces
    printf("Ange en text 1: ");
    fgets(text1, sizeof(text1), stdin);
    text1[strcspn(text1, "\n")] = 0;  // Remove newline character

    printf("Ange en text 2: ");
    fgets(text2, sizeof(text2), stdin);
    text2[strcspn(text2, "\n")] = 0;  // Remove newline character

    printf("Ange en text 3: ");
    fgets(text3, sizeof(text3), stdin);
    text3[strcspn(text3, "\n")] = 0;  // Remove newline character

    // Concatenate the strings with spaces between them
    strcpy(textTotal, text1);
    strcat(textTotal, " ");
    strcat(textTotal, text2);
    strcat(textTotal, " ");
    strcat(textTotal, text3);

    // Display the result and the length of the concatenated string
    printf("Det blev: %s och det är %ld tecken\n", textTotal, strlen(textTotal));

    return 0;
}
