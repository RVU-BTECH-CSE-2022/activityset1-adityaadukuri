#include<stdio.h>
#include<string.h>

void input_str(char *w){
  printf("Type a word 20 char or less: ");
  scanf("%s",&w[0]);
}

int strcomp(char *word1, char *word2) {
  int result;
  result = strcmp(word1, word2);
  return result;
}

void str_output(int n, char *word1, char *word2){
  if(n>0) {
    printf("%s is greater than %s", word1, word2);
  }
  else if(n<0){
  printf("%s is greater than %s", word2, word1);
  }
  else{
    printf("%s is equal to %s", word1, word2);
  }
}

int main() {
  int a;
  char word1[20], word2[20];
  input_str(&word1);
  input_str(&word2);
  a = strcomp(&word1, &word2);
  str_output(a,&word1,&word2);
  return 0;
}