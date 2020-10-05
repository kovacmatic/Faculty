#include <stdio.h>

void main() {
    int v[3]  = { 10, 20, 30 };
    int *p = v; // integer pointer - naslov spremenljivke

    for (int i = 0; i < 3; i++) {
        // printf("%d \n", v[i]);
        printf("*p: %d, p: %x \n", *p, p);
        p++; 
    }
}