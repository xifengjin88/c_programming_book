#include <stdio.h>
#include <stdbool.h>
#define LETTERS 26

int main(void)
{
  int first_letters[LETTERS] = {0};
  int second_letters[LETTERS] = {0};

  printf("Enter first word: ");

  while (true)
  {
    char c;
    scanf("%c", &c);
    if (c == '0')
    {
      break;
    }
    first_letters[((int)c) - 'a'] += 1;
  }

  printf("Enter second word: ");

  while (true)
  {
    char c;
    scanf("%c", &c);
    if (c == '0')
    {
      break;
    }
    second_letters[((int)c) - 'a'] += 1;
  }

  bool is_anagram = true;
  bool has_letters = true;

  for (int i = 0; i < 26; i += 1)
  {
    if (first_letters[i] != second_letters[i])
    {
      is_anagram = false;
    }
    if (first_letters[i] > 0 || second_letters[i] > 0)
    {
      has_letters = true;
    }
  }

  printf("\n");

  if (has_letters && is_anagram)
  {
    printf("The words are anagram!\n");
  }
  else
  {
    printf("The words are not anagram!\n");
  }
}