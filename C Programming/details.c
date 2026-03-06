// Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.

#include<stdio.h>
int main()
{
  char first_name[50];
  char last_name[50];
int age;
printf("Enter the first name:\n");
  scanf("%s",first_name);
  printf("Enter the last name:\n");
  scanf("%s",last_name);
  printf("enter your age:\n");
  scanf("%d",&age);
  printf("first name:%s\n",first_name);
  printf("last name:%s\n",last_name);
  printf("age:%d\n",age);
  return 0;
}
