#include<stdio.h>

int input_n() {
  int a;
  printf("Enter n : ");
  scanf("%d", &a);
  return a;
}

int sum_n(int n) {
  int s, i;
  s=0;
  for(i=1;i<=n;i++) {
    s = s+i;
  }
  return s;
}

void output(int x){
  printf("The sum is = %d", x);
}

int main() {
  int a,b;
  a = input_n();
  b = sum_n(a);
  output(b);
  return 0;
}