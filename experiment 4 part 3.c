#include <stdio.h>

int main() {
  int n, max;

  printf("Enter the number of numbers: ");
  scanf("%d", &n);

  printf("Enter the numbers: ");

  for (int i = 0; i < n; i++) {
    int num;
    scanf("%d", &num);

    if (i == 0 || num > max) {
      max = num;
    }
  }

  printf("The maximum number is %d.\n", max);

  return 0;
}
