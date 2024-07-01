#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define GRID_SIZE 10
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

int main(void)
{
  char grid[GRID_SIZE][GRID_SIZE] = {'.'};
  int directions[4] = {0, 1, 2, 3};
  char chars[26] = {'.'};

  for (int row = 0; row < GRID_SIZE; row += 1)
  {
    for (int col = 0; col < GRID_SIZE; col += 1)
    {
      grid[row][col] = '.';
    }
  }

  for (int i = 0, start = 'A'; i < 26; i += 1)
  {
    chars[i] = (char)start;

    start += 1;
  }

  srand((unsigned)time(NULL));

  int items_placed = 0;
  int row;
  int col;
  row = rand() % GRID_SIZE;
  col = rand() % GRID_SIZE;
  char c = chars[rand() % 26];
  grid[row][col] = c;
  items_placed += 1;
  while (true)
  {
    bool terminate = items_placed == GRID_SIZE * GRID_SIZE ||
                     ((row == 0 || grid[row - 1][col] != '.') &&
                      (row == GRID_SIZE - 1 || grid[row + 1][col] != '.') &&
                      (col == 0 || grid[row][col - 1] != '.') && (col == GRID_SIZE - 1 || grid[row][col + 1] != '.'));

    if (terminate)
    {
      break;
    }

    for (int row = 0; row < GRID_SIZE; row += 1)
    {
      for (int col = 0; col < GRID_SIZE; col += 1)
      {
        printf("%c", grid[row][col]);
      }
      printf("\n");
    }

    printf("_______________________________________\n");

    int direction = directions[rand() % 4];
    int new_row = row;
    int new_col = col;
    if (direction == UP)
    {
      printf("what is the direction: up\n");
    }
    else if (direction == LEFT)
    {
      printf("what is the direction: left\n");
    }
    else if (direction == RIGHT)
    {
      printf("what is the direction: right\n");
    }
    else if (direction == DOWN)
    {
      printf("what is the direction: down\n");
    }

    if (direction == UP)
    {
      new_row -= 1;
    }
    else if (direction == DOWN)
    {
      new_row += 1;
    }
    else if (direction == LEFT)
    {
      new_col -= 1;
    }
    else if (direction == RIGHT)
    {
      new_col += 1;
    }
    if (new_row >= 0 && new_row < GRID_SIZE && new_col >= 0 && new_col < GRID_SIZE && grid[new_row][new_col] == '.')
    {
      row = new_row;
      col = new_col;
      grid[row][col] = chars[rand() % 26];
    }
  }

  for (int row = 0; row < GRID_SIZE; row += 1)
  {
    for (int col = 0; col < GRID_SIZE; col += 1)
    {
      printf("%c", grid[row][col]);
    }
    printf("\n");
  }
}