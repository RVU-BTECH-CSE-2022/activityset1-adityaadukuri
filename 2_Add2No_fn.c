#include<stdio.h>

int inputNum(void){
  int a;
  printf("Enter No :");
  scanf("%i",&a);
  return a;
}

int add(int a, int b){
  return a+b;
}

void outputNum(int a, int b, int c) {
  printf("%i + %i = %i", a,b,c);
  
}

int main(void) 
{
  int x = inputNum();
  int y = inputNum();
  int z = add(x,y);
  outputNum(x,y,z);
  return 0;
}