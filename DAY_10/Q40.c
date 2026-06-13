/*Write a program to Print character pyramid
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA     */

#include <stdio.h>

int main() {
    int i, j, rows = 5;
    char ch;

    for(i = 1; i <= rows; i++) {

        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print ascending characters
        for(ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }

        // Print descending characters
        for(ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}