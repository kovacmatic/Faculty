#include <stdio.h>

void main() {
    int a  = 10;
    int *p; // integer pointer - naslov spremenljivke

    p = &a; // 'p' je naslov od 'a'

    // %d format integer, 
    // %x format hexadecimal za naslov
    // \n new line
    printf("a: %d, p: %x \n", a, p); 

    a = 20;
    printf("a: %d, p: %x \n", a, p); 

    *p = 30;
    printf("a: %d, p: %x \n", a, p); 
}