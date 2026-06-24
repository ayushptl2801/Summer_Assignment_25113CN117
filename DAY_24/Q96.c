/*Write a program to Remove duplicate characters*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int visited[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String after removing duplicates: ");

    for (int i = 0; str[i] != '\0'; i++) {
        if (!visited[(unsigned char)str[i]]) {
            printf("%c", str[i]);
            visited[(unsigned char)str[i]] = 1;
        }
    }

    printf("\n");

    return 0;
}