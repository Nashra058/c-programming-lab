#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2) {
  return sqrt((x2 - x1)^2 + (y2 - y1)^2);
}

int main() {
  float x1, y1, x2, y2, distance;

  printf("Enter the coordinates of the first point: ");
  scanf("%f %f", &x1, &y1);

  printf("Enter the coordinates of the second point: ");
  scanf("%f %f", &x2, &y2);

  distance = distance(x1, y1, x2, y2);

  printf("The distance between the two points is %f.", distance);

  return 0;
} 