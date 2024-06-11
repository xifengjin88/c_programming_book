#include <stdio.h>

int main(void)
{
  int digits;
  printf("Enter a number: \n");
  scanf("%d", &digits);
  int number_of_digits = 0;
  if (digits < 10)
  {
    number_of_digits = 1;
  }
  else if (digits < 100)
  {
    number_of_digits = 2;
  }
  else if (digits < 1000)
  {
    number_of_digits = 3;
  }
  else
  {
    number_of_digits = 4;
  }

  printf("The number %d has %d digits\n", digits, number_of_digits);
}