#include <stdio.h>

int main(void)
{
  int digits;
  printf("Enter a digit: ");
  scanf("%d", &digits);

  int new_digits = 0;

  do
  {
    int remainder = digits % 10;
    new_digits = new_digits * 10 + remainder;
    digits /= 10;
  } while (digits != 0);

  printf("The digits in reverse is %d\n", new_digits);
}