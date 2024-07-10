#include <stdio.h>

double compute_tax(double income);

int main(void)
{
  double income;
  printf("What is your income: ");
  scanf("%lf", &income);
  printf("Your income tax is %lf.\n", compute_tax(income));
  
  return 0;
}

double compute_tax(double income)
{
  if (income > 7000) {
    return 230.0 + (income - 7000) * 0.06;
  } else if (income >= 5250 && income <= 7000) {
    return 142.50 + (income - 5250) * 0.05;
  } else if (income >= 3750 && income <= 5250) {
    return 82.50 + (income - 3750) * 0.04;
  } else if (income >= 2250 && income <= 3750) {
    return 37.50 + (income - 2250) * 0.03;
  } else if (income >= 750 && income <= 2250) {
    return 7.5 + (income - 750) * 0.02;
  } else {
    return income * 0.01;
  }
}