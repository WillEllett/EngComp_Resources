/* Author:  William Ellett
StaffID:    133003

Exercise 5.1 From Programming, Problem Solving and Abstraction with C
*/
#include <stdio.h>

/*Prototypes*/
int max_2_ints(int num1, int num2);

int main(int argc, char *argv[]){
  int num1, num2;
  printf("Enter two numbers:");
  scanf("%d%d", &num1, &num2);
  printf("The larger number is %d", max_2_ints(num1, num2));
  return 0;
}



int max_2_ints(int int1, int int2){
  if (int1 >= int2){
    return int1;
  }
  else{
    return int2;
  }
}
