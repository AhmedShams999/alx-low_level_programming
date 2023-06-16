#include <stdio.h>

int main(void) {
    int a = 'a';

    for (; a <= 'z'; a++) {
        putchar((char)a);
    }
    putchar('\n');
    return 0;
}