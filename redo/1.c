#include<stdio.h>

int input(){
  int x;
  scanf("%d", &x);
  return x;
}
int FindArea(int length,int breadth){
  int area = length * breadth;
  return area;
}
void output(int l,int b, int a){
  printf("The area of a rectangle with length %d cm and breadth %d cm is %d sq. cm.\n",l,b,a);
}
int main(){
  int length, breadth,area;
  printf("Enter length:");
  length=input();
  printf("Enter breadth:");
  breadth=input();
  area=FindArea(length, breadth);
  output(length, breadth, area);
  return 0;
}