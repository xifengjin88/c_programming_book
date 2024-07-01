#include <stdio.h>

#define NUM_DIGITS 10

int main(void)
{
  int digit_seen[NUM_DIGITS] = {0};

  long n;
  printf("Enter a digit: ");
  scanf("%ld", &n);
  int has_repeated = 0;

  while (n > 0)
  {
    int digit = n % 10;

    digit_seen[digit] += 1;
    if (digit_seen[digit] > 1)
      has_repeated = 1;
    n /= 10;
  }

  if (has_repeated)
    printf("\nRepeated digits: ");
  else
  {
    printf("\nNo repeated digits!\n");
    return 0;
  }

  for (int i = 0; i < NUM_DIGITS; i += 1)
  {
    if (digit_seen[i] > 1)
      printf("%d ", i);
  }

  printf("\n");

  return 0;
}