#include <stdio.h>

int main()
{

  int i = 10;

  while (i <= 20)
  {
    if (i == 13 || i == 15 || i == 18)
    {
      i++;
      continue;
    }
    printf("%d\n", i);
    i++;
  }

  return 0;
}