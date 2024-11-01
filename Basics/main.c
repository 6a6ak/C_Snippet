#include <stdio.h>

int main() {
    // Print "Hello, World!" to the console
   // printf("Hello, World!\n");
    // printf("Hello, Babäk!\n");
   // return 0; // Indicate that the program ended successfully


  int i = 10;

  while (i <= 20) {
    if (i == 13 || i == 15 || i == 18) {
      i++;
      continue;
    }
    printf("%d\n", i);
    i++;
  }

  return 0;
}