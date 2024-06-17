#include <stdio.h>

int main(void)
{
  float integer;

  printf("Enter a number: ");
  scanf("%f", &integer);
  float largest = integer;
  while (integer > 0)
  {
    printf("Enter a number: ");
    scanf("%f", &integer);
    if (integer > largest)
    {
      largest = integer;
    }
  }
  printf("The largest number is %f\n", largest);
}