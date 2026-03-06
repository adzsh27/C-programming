// Create a program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.

#include<stdio.h>
int main(){
  int num1;
  float num2;
  double num3;
  char num4;
  printf("size of int: %lu bytes\n",sizeof(num1));
  printf("Size of num2:%d bytes\n",sizeof(num2));
  printf("Size of num3:%d bytes\n",sizeof(num3));
  printf("size of num4:%d bytes\n",sizeof(num4));
  return 0;
}
