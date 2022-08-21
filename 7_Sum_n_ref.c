#include<stdio.h>
int input_array_size() {
  int a;
  printf("Enter the size : ");
  scanf("%d", &a);
  return a;
}

void input_array(int n, int *a){
  for(int i = 0; i<n; i++) {
    printf("enter a number : ");
    scanf("%d",&a[i]);
  }
}

int sum_n(int n, int *a) {
  int sm = 0;
  for (int i=0; i<=n-1;i++) {
    sm = sm+a[i];
  }
  return sm;
}

void out_put(int n, int *a, int sm) {
  for(int i=0;i<n;i++) {
    printf("%d", a[i]);
    if (i+1 !=n) {
      printf(" + ");
    }
  }
  printf(" = %d", sm);    
}

int main() {
  
  int n, sm;
  n= input_array_size();
  int arr[n];
  input_array(n, &arr);
  sm = sum_n(n,&arr);
  printf("sum: %d\n", sm);
  out_put(n,&arr,sm);
  return 0;
  }