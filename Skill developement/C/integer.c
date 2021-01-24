#include<stdio.h>
#include<string.h>

unsigned binary_to_int(char *binary) {
  unsigned result = 0;
  for (char *i=binary; *i!= 'b'; *i++)
    if (*i == '1' || *i == '0') {
      result <<= 1;
      if (*i == '1') result |= 1;
    } else {
        printf("%c", i);
        return 0;
    }
  return result;
}

int pow(int base, int exponent){
    int result = 1;
    while(exponent--)
        result *= base;
    return result;
}

int main(){
    printf("%d\n", pow(2, 4));
    return 0;
}