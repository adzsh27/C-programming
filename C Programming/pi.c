//Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.

#include<stdio.h>
//#define PI 3.14   // Define a constant for pi using preprocessor directive (this is also another way to define a constant)
int main(){
  const float PI=3.14;     // Define a constant for pi
  float radius, circumference;
  printf("enter the radius of the circle:\n");
  scanf("%f",&radius);
  circumference=2*PI*radius;
  printf("the circumference of the circle is:%.2f\n",circumference);
  return 0;
}
