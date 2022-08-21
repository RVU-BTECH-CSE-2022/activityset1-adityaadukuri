#include<stdio.h>

typedef struct complex{
  float real, imaginary;
}cmpl;

cmpl input_cmpl(){
  cmpl a;
  printf("Enter real and imaginary part of complex number: ");
  scanf("%f %f", &a.real, &a.imaginary);
  //printf("Enter complex part: ");
  return a;
}

cmpl cmpl_add(cmpl a, cmpl b){
  cmpl c;
  c.real = a.real + b.real;
  c.imaginary = a.imaginary + b.imaginary;
  return c;
}

void output_cmpl(cmpl a,cmpl b,cmpl c){
  //printf("The sum of 2 complex no is: ");
  printf("%f + %fi + %f + %fi is %f + %fi", a.real, a.imaginary, b.real, b.imaginary, c.real, c.imaginary);
}

int main(){
  cmpl x,y,s;
  x = input_cmpl();
  y = input_cmpl();
  s = cmpl_add(x,y);
  output_cmpl(x,y,s);
  return 0;
  
}