#include<stdio.h>

union example {
  int i;
  char ch;
};

int main(){
  printf("%d", sizeof(union example));
  return 0;
}