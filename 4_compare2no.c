# include <stdio.h>
//int inputNum ();
//int compareNum(int a, int b)


int main () {
	int a = inputNum();
  int b = inputNum();
  int c = findLargest(a,b);
  printLargest(c);
  return 0;
}

int inputNum() {
  int x;
  printf("Enter a number : ");
  scanf("%i", &x);
  return x;
}

int findLargest(int a, int b) {
  if (a>b) {
		//printf("%i is greater", a);
    return a;
    }
	else if (a==b) {
		//printf("%i = %i", a,b);
    return b;
	}
	else {
		//printf("%i is greater", b);
    return b;
        }
  }

void printLargest(int l) {
  printf("Largest number is %i", l);
  }

