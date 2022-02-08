/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1, mark2;
   float average;
   printf("enter your 1st mark :");
   scanf("%d", &mark1);
  
   printf("enter your 2nd mark :");
   scanf("%d", &mark2);
   average = mark1+mark2;
   
   printf("your average mark is  %2.f",average);
  return 0;
}

