#include<stdio.h>

struct _complex{
  float real,imaginary;
};

typedef struct _complex complex;

int get_n(){
  int a;
  printf("How many numbers? ");
  scanf("%d",&a);
  return a;
}

input_num(complex *a,int n){
  int i;
  printf("Type the numbers: ");
  for(i=0;i<n;i++){
    scanf("%f %f", &a[i].real, &a[i].imaginary);
    }
}

complex add_num(complex *r,int n){
  int i,b,c;
  complex sum;
  sum.real = 0 ;
  sum.imaginary = 0;
  
  for(i = 0;i<n;i++){
    sum.real = sum.real + r[i].real;
    sum.imaginary = sum.imaginary + r[i].imaginary;
    }
  return sum;
}

output_sum(int n,complex *a, complex sum){
  int i;
  for(i = 0;i<n;i++){
    if (i !=0) {
      printf("+");
    }
    
  printf("%f + %fi", a[i].real,a[i].imaginary);
  }
    printf("= %f + %f", sum.real,sum.imaginary);
}

int main() {
  int n,inpt;
  complex sum;
  n = get_n();
  complex a[n];
  input_num(&a,n);
  sum = add_num(&a,n);
  output_sum(n,&a,sum);
  return 0;
}