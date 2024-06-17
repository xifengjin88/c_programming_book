#include <stdio.h>

int main(void)
{
  int number_a;
  int number_b;

  printf("Enter two integeres: ");
  scanf("%d %d", &number_a, &number_b);
  int old_number_a = number_a;
  int old_number_b = number_b;

  // while (number_b > 0)
  // {
  //   int remainder = number_a % number_b;
  //   int temp = number_b;
  //   number_b = remainder;
  //   number_a = temp;
  // }

  // printf("The gcd between %d and %d is %d\n", old_number_a, old_number_b, number_a);

  int gcd = number_a;
  while (number_a % gcd != 0 || number_b % gcd != 0)
  {
    gcd--;
  }

  printf("The gcd between %d and %d is %d\n", old_number_a, old_number_b, gcd);
}