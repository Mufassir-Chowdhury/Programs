#include<stdio.h>
#include<stdarg.h>

inline void printstr(char *s){
    while(*s)
        putchar(*s++);
}

void print(char *form, ...) {
	va_list list;
	va_start(list,form);
	char c = *form++;
	char digs[10], *p;
	while(c) {
		switch(c) {
		case 's': printstr(va_arg(list,char *));
			  break;
		case 'c': putchar(va_arg(list, int));
			  break;
		case 'd': p = digs;
			  int i = va_arg(list, int);
			  do {
			  	*p++ = (i % 10) + '0';
			        i /= 10;
			  } while(i);
			  while(p > digs) {
			  	putchar(*--p);
			  }
			  break;
		}
        c = *form++;
    }
    va_end(list);
}

int main(){
    print("sdscs","Mary had ",21, " little lambs and ", '1' , " tiny rhinoceros.\n");
    return 0;
}