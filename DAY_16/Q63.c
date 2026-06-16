/*Write a program to Find pair with given sum*/

#include <stdio.h>

int main() {
    int arr[100], n, sum, i, j, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], sum);
                found = 1;
            }
        }
    }

    if(!found) {
        printf("No pair found with the given sum.\n");
    }

    return 0;
}