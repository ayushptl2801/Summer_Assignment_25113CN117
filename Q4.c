/* Write a program to Count digits in a number */

#include <stdio.h>

int main() {
int n, i = 0;

printf("Enter an integer: ");
scanf("%d", &n);

if (n == 0) {
    i = 1;}
else {
if (n < 0) {
n = -n;
}
while (n != 0) {
    n /= 10;
    i++;
}
}

printf("Number of digits: %d\n", i);

return 0;
}