# include <stdio.h>
//int inputNum ();
//int compareNum(int a, int b)


int main () {
  int a,b,c,lr;
  inputNum(&a,&b,&c);
  findLargest(a,b,c, &lr);
  printLargest(a,b,c, lr);
  return 0;
}

void inputNum(int *x,int *y,int *z) {
  printf("Enter first number : ");
  scanf("%i", x);
  printf("Enter second number : ");
  scanf("%i", y);
  printf("Enter third number : ");
  scanf("%i", z);
  /*printf("Enter 3 numbers : ");
  scanf("%d %d %d", &x, &y, &z);*/
}

void findLargest(int a, int b, int c, int *d) {
  if (a>b) {
		//printf("%i is greater", a);
    if(a>c) {
      *d = a;
      }
      else {
      *d = c;
      }
    }
  else {
    if(b>c){
      *d = b;
    }
    *d = c;
  }
}

void printLargest(int w, int x, int y, int z) {
  printf("Largest number out of %i, %i and %i is %i", w,x,y,z);
  }

