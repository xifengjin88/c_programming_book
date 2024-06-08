#include <stdio.h>

#define PI 3.1415926

int main(void)
{
  float volumn_of_sphere;
  float radius;

  printf("Enter the radius: \n");
  scanf("%f", &radius);

  volumn_of_sphere = radius * radius * radius * PI * (4 / 3);
  printf("The volumn is %.2f\n", volumn_of_sphere);
}