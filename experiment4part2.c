#include <stdio.h>

int main() {
  int n, fibonacci_number, previous_fibonacci_number;

  printf("Enter the number of Fibonacci numbers to print: ");
  scanf("%d", &n);

  fibonacci_number = 1;
  previous_fibonacci_number = 0;

  printf("The first %d Fibonacci numbers are:\n", n);
  for (int i = 1; i <= n; i++) {
    printf("%d ", fibonacci_number);

    int next_fibonacci_number = fibonacci_number + previous_fibonacci_number;
    previous_fibonacci_number = fibonacci_number;
    fibonacci_number = next_fibonacci_number;
  }

  printf("\n");

  return 0;
}
