#include <stdio.h>
#include <string.h>

int main() {
    // Define the character array
    char array[] = "hello world";
    char target = 'o';  // character to count
    int count = 0;

    // Count how many times 'target' appears in the array
    for (int i = 0; array[i] != '\0'; i++) {
        if (array[i] == target) {
            count++;
        }
    }

    // Get the length of the array (string)
    int length = strlen(array);

    // Print each character in the array along with its index
    for (int i = 0; i < length; i++) {
        printf("Index %d: %c\n", i, array[i]);
    }

    // Display the count of the target character
    printf("Amount of '%c' in array: %d\n", target, count);

    return 0;
}
