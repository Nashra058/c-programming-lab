#include <stdio.h>

#define PI 3.14159265359

/* Function to calculate the perimeter of a circle */
float perimeter_circle(float radius) {
  return 2 * PI * radius;
}

/* Function to calculate the area of a circle */
float area_circle(float radius) {
  return PI * radius * radius;
}

/* Function to calculate the perimeter of a rectangle */
float perimeter_rectangle(float length, float width) {
  return 2 * (length + width);
}

/* Function to calculate the area of a rectangle */
float area_rectangle(float length, float width) {
  return length * width;
}

/* Function to calculate the perimeter of a square */
float perimeter_square(float side) {
  return 4 * side;
}

/* Function to calculate the area of a square */
float area_square(float side) {
  return side * side;
}

int main() {
  float radius, length, width, side;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  printf("Enter the length and width of the rectangle: ");
  scanf("%f %f", &length, &width);

  printf("Enter the side of the square: ");
  scanf("%f", &side);

  /* Calculate the perimeter and area of the circle */
  float perimeter_of_circle = perimeter_circle(radius);
  float area_of_circle = area_circle(radius);

  /* Calculate the perimeter and area of the rectangle */
  float perimeter_of_rectangle = perimeter_rectangle(length, width);
  float area_of_rectangle = area_rectangle(length, width);

  /* Calculate the perimeter and area of the square */
  float perimeter_of_square = perimeter_square(side);
  float area_of_square = area_square(side);

  /* Print the results */
  printf("Perimeter of the circle: %f\n", perimeter_of_circle);
  printf("Area of the circle: %f\n", area_of_circle);

  printf("Perimeter of the rectangle: %f\n", perimeter_of_rectangle);
  printf("Area of the rectangle: %f\n", area_of_rectangle);

  printf("Perimeter of the square: %f\n", perimeter_of_square);
  printf("Area of the square: %f\n", area_of_square);

  return 0;
}

