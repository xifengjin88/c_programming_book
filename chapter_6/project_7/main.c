#include <stdio.h>

int main(void)
{
  int days;
  int starting_day;

  printf("Enter number of days in a month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &starting_day);

  for (int i = 1; i <= starting_day; i += 1)
    printf("  ");

  for (int i = 1; i <= days; i += 1)
  {
    printf("%3d", i);
    if ((starting_day + i - 1) % 7 == 0)
      printf("\n");
  }
}