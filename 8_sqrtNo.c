#include<stdio.h>
#include<math.h>

float input_val(){
  float a;
  printf("Enter a number: ");
  scanf("%f", &a);
  return a;
}

float my_sqrt(float s){
  float x = s;
  float px = s;
  float cx=s;
  do{
    px=cx;
    x = (x+(s/x))/2;
    cx = round(x*10000)/10000;
  }while(px>cx);
  return x;
}

void output_sqrt(float n, float sqrt_result){
  printf("\nThe square root of %f is: %.4f", n,sqrt_result);
}


int main(){
  float a,sqrt;
  a = input_val();
  printf("\ninput is : %f",a);
  sqrt = my_sqrt(a);
  output_sqrt(a, sqrt);
  return 0;
}