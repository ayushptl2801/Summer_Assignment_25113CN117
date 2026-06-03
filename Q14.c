/*Write a program to Find nth Fibonacci term*/

#include <stdio.h>
int fibonacci(int n) {
    int first = 0, second = 1, next, i;

    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    for (i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }
    return second;
}

int main() {
    int n;

    printf("Enter the term number (n): ");
    scanf("%d", &n);

    printf("Fibonacci term at position %d is: %d\n", n, fibonacci(n));

    return 0;
}
