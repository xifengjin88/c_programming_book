#include <stdio.h>
#define NUM_GRID 5

int main(void)
{
  int grid[NUM_GRID][NUM_GRID];

  for (int i = 0; i < NUM_GRID; i++)
  {
    printf("Enter row %d: ", i);
    for (int j = 0; j < NUM_GRID; j++)
    {
      scanf("%d", &grid[i][j]);
    }
  }

  printf("\nRow totals: ");

  for (int i = 0; i < NUM_GRID; i++)
  {
    int row_total = 0;
    int col_total = 0;
    for (int j = 0; j < NUM_GRID; j += 1)
    {
      row_total += grid[i][j];
      col_total += grid[j][i];
    }
    printf("%d ", row_total);
    printf("%d ", col_total);
  }
  return 0;
}