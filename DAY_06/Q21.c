/*Write a program to Convert decimal to binary*/

#include <stdio.h>

void decimalToBinary(int n)
{
    if (n == 0)
        return;

    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0)
        printf("0");
    else
        decimalToBinary(n);

    return 0;
}