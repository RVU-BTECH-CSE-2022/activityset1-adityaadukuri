# include <stdio.h>
//int inputNum ();
//int compareNum(int a, int b)


int main () {
	int a = inputNum();
  int b = inputNum();
  int c = inputNum();
  int d = findLargest(a,b,c);
  printLargest(d);
  return 0;
}

int inputNum() {
  int x;
  printf("Enter a number : ");
  scanf("%i", &x);
  return x;
}

int findLargest(int a, int b, int c) {
  if (a>b) {
		//printf("%i is greater", a);
    if(a>c) {
      return a;
      }
      else {
      return c;
      }
    }
  else {
    if(b>c){
      return b;
    }
    return c;
  }
}

void printLargest(int l) {
  printf("Largest number is %i", l);
  }

