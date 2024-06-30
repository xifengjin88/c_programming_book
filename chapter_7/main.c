#include <stdio.h>

#define NUM_FIBS 40

int main(void)
{
  int fibs[NUM_FIBS] = {0, 1};
  int i = 2;
  while (i < NUM_FIBS)
  {
    int a = fibs[i - 1];
    int b = fibs[i - 2];
    fibs[i] = a + b;
    i += 1;
  }

  for (i = 0; i < NUM_FIBS; i += 1)
  {
    printf("%d ", fibs[i]);
  }
  printf("\n");

  return 0;
}