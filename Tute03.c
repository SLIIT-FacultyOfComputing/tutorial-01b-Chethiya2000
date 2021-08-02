/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int n,num,sum = 1;

  printf("Input the number : ");
  scanf("%d",&n);

  for(num = 1; num <= n; num++)
  {
    sum = sum + num;
  }

  printf("The sum of the number from 1 to n is : %d",sum - 1);

  return 0;
}

