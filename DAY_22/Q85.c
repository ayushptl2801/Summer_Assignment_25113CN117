/*Write a program to Check palindrome string*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    // Remove newline character if present
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is Not a Palindrome.\n");

    return 0;
}