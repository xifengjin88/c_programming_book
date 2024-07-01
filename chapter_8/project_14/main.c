#include <stdio.h>
#include <stdbool.h>

#define S_SIZE 1000

int main(void)
{

  char chars[S_SIZE];
  char terminating_char;
  printf("Enter a sentence: ");
  int i = 0;

  while (i < S_SIZE)
  {
    char current_char;
    scanf("%c", &current_char);
    if (current_char == '.' || current_char == '?' || current_char == '!')
    {
      terminating_char = current_char;
      chars[i] = terminating_char;
      break;
    }
    chars[i++] = current_char;
  }

  for (i = S_SIZE - 1; i >= 0; i -= 1)
  {
    if (chars[i] == '.' || chars[i] == '?' || chars[i] == '!')
    {
      break;
    }
  }

  int length_s;

  while (i > 0)
  {
    i -= 1;
    char current_char = chars[i];
    int j = i;
    length_s = 0;
    while (j > 0 && chars[j] != ' ')
    {
      j--;
      length_s += 1;
    }

    if (j == 0)
      break;

    for (int z = j + 1; z <= j + length_s; z += 1)
    {
      printf("%c", chars[z]);
    }
    i = j;
    printf(" ");
  }

  for (int z = 0; z <= i; z += 1)
  {
    printf("%c", chars[z]);
  }

  printf("%c\n", terminating_char);

  return 0;
}