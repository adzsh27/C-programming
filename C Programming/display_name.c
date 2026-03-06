#include<stdio.h>
int main(){
  //CREATE A PROGRAM TO INPUT NAME OF A PERSON AND DISPLAY IT IN THE FORMAT "HELLO <NAME> WELCOME TO C PROGRAMMING"
  char name[100];
  printf("Enter your name: \n");
  scanf(" %s",name);
  printf("HELLO %s WELCOME TO C PROGRAMMING\n",name);
  return 0;
}