//.Create a program to swap two numbers. 

#include<stdio.h>
int main(){
  int num1,num2,temp;
  printf("enter the first number:\n");
  scanf("%d",&num1);
  printf("enter the second number:\n");
  scanf("%d",&num2);
  temp=num1;
  num1=num2;
  num2=temp;
  printf("after swaping the first number is:%d\n",num1);
  printf("after swaping the second number ids:%d",num2);
  return 0;
}