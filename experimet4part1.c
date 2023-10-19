#include <stdio.h>

int main() {
  int num, factorial;

  printf("Enter a number: ");
  scanf("%d", &num);

  factorial = 1;
  for (int i = 1; i <= num; i++) {
    factorial *= i;
  }

  if (factorial == num) {
    printf("%d is a factorial number.\n", num);
  } else {
    printf("%d is not a factorial number.\n", num);
  }

  return 0;
}
