#include <stdio.h>

int main(void)
{
  int digits;
  printf("Enter a two-digit number: ");
  scanf("%d", &digits);
  int first_digit = digits / 10;
  int second_digit = digits % 10;
  printf("The reverse is %d\n", second_digit * 10 + first_digit);
  return 0;
}