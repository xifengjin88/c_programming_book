#include <stdio.h>

int main(void)
{
  int hours;
  int mins;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &mins);
  int new_hours = hours;
  if (hours > 12)
  {
    new_hours -= 12;
  }
  printf("Equivalent 12-hour time: %d:%02d %s\n", new_hours, mins, hours > 12 ? "PM" : "AM");
  return 0;
}