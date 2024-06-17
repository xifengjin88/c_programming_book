#include <stdio.h>

int main(void)
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  for (int i = 1; i <= number; i += 1)
  {
    int square = i * i;
    if (square % 2 == 0)
      printf("%d\n", square);
  }
}