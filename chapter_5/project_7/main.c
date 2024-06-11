#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  printf("Enter 4 integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int largest = a;
  int smallest = a;
  if (b > largest)
  {
    largest = b;
  }
  else if (c > largest)
  {
    largest = c;
  }
  else if (d > largest)
  {
    largest = d;
  }

  if (b < smallest)
  {
    smallest = b;
  }
  else if (c < smallest)
  {
    smallest = c;
  }
  else if (d < smallest)
  {
    smallest = d;
  }

  printf("The largest integer: %d\n", largest);
  printf("The smallest integer: %d\n", smallest);
}