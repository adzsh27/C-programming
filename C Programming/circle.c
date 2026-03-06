// Create a program to print the area of a circle by inputting its radius.

#include<stdio.h>
#define PI 3.14
int main(){
  float area,radius;
  printf("enter the radius of the circle:\n");
  scanf("%f",&radius);
  area=2*PI*radius*radius;
  printf("the area of the circle is:%.2f",area);
  return 0;

}