/*Write a program to Find largest prime factor*/

#include <stdio.h>

int main() {
    int num;
    int max_prime = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num % 2 == 0) {
        max_prime = 2;
        num = num / 2;
    }

    for (int i = 3; i * i <= num; i = i + 2) {
        while (num % i == 0) {
            max_prime = i;
            num = num / i;
        }
    }

    if (num > 2) {
        max_prime = num;
    }

    printf("The largest prime factor is: %d\n", max_prime);

    return 0;
}
