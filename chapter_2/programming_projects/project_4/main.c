#include <stdio.h>

int main(void)
{
  float amount;
  float tax_rate = 0.05;
  printf("Enter an amount: ");
  scanf("%f", &amount);
  amount = amount * (1 + tax_rate);
  printf("With tax added $%.2f\n", amount);
}