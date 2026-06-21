/*Write a program to Count vowels and consonants*/

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];

        // Check if character is an alphabet
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

            // Convert uppercase to lowercase
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}