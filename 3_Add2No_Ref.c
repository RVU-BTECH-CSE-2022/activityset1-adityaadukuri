#include<stdio.h>

void inputNum(int *i, int *j){
  printf("Enter two Numbers :");
  scanf("%i %i",&i,&j);
}

void add(int a, int b, int *sum){
  *sum = a+b;
}

void outputNum(int a, int b, int c) {
  printf("%i + %i = %i", a,b,c);
  
}

int main(void) 
{
  int a,b, z;
  inputNum(&a,&b);
  printf("a is %i, b is %i \n", a, b);
  add(a,b, &z);
  printf("value of z = %i \n",z);
  outputNum(a,b,z);
  return 0;
}