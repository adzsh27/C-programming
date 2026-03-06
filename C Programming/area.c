// Create a program to print the area of a square by inputting its side length

#include<stdio.h>
int main(){
  float area,side_length;
  printf("Enter the side length of the square:\n");
  scanf("%f",&side_length);
  area=side_length *side_length;
  printf("the area of the square is: %.3f\n",area);     //%.3f is used to print the area with 3 decimal places
  return 0;
}