/**
 * Problem statement:
 * Write a program that asks the user to enter a series of inteters. 
 * Sort the array using selection sort algorithm
 * 
 * Input:
 * - array of integers
 * - length of the array
 * Outout:
 * - void (keep the array sorted)
 * Rules:
 * - return if n is equal to 0
 * - find the largest element of the array at index i
 * - swap the element between n - 1 and i
 * - call selection_sort again from 0..n-1
 */

#include <stdio.h>
#define N 5

void print_integers(int a[N]);
void selection_sort(int a[N], int n);

int main(void){
  int a[N] = {0};
  printf("Enter integers: ");
  for (int i = 0; i < N; i += 1) {
    scanf("%d", &a[i]);
  }

  selection_sort(a, N);
  print_integers(a);
  
}

void print_integers(int a[N])
{
  for (int i = 0; i < N; i += 1)
    printf("%d ", a[i]);
  printf("\n");
}

void selection_sort(int a[N], int n) {
  if (n <= 0) return;
  int largest_index = 0;
  for (int i = 1; i < n; i += 1) {
    if (a[i] > a[largest_index]) {
      largest_index = i;
    }
  }
  int temp = a[largest_index];
  a[largest_index] = a[n - 1];
  a[n - 1] = temp;
 
  return selection_sort(a, n - 1);
}




