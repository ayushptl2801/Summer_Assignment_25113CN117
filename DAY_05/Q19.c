/*Write a program to Print factors of a number*/

#include <stdio.h>
int main() {
    int num, i;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1; 
    }

    printf("Factors of %d are: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) { 
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
