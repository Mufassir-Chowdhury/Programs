#include <stdio.h>
#include <wchar.h>

int main(void) {
    printf("%ld %ld\n", sizeof(wchar_t), sizeof(wint_t));
    return 0;
}


