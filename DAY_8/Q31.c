/*Write a program to Print character triangle. 
A 
AB 
ABC 
ABCD 
ABCDE */

#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for(i = 1; i <= rows; i++) {
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}