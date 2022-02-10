/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int subject1;
  int subject2;
  int marks;
  float average;

  printf("Enter the first Subject Marks :");
  scanf("%d",&subject1);

  printf("Enter the first Subject Marks :");
  scanf("%d",&subject2);
  
  marks = subject1 + subject2;

  average = marks/2.0;

  printf("Average Marks :%.2f",average);

  return 0;
}

