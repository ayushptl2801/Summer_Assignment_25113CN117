/*Write a program to Create menu-driven array operations system*/

#include <stdio.h>

int main() {
    int arr[100], n, i, choice, key;
    int largest, smallest, found;

    do {
        printf("\n===== Menu-Driven Array Operations =====\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Largest Element\n");
        printf("5. Find Smallest Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                printf("Array created successfully!\n");
                break;

            case 2:
                printf("Array Elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                found = 0;
                printf("Enter element to search: ");
                scanf("%d", &key);

                for(i = 0; i < n; i++) {
                    if(arr[i] == key) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Element not found!\n");
                break;

            case 4:
                largest = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > largest)
                        largest = arr[i];
                }
                printf("Largest element = %d\n", largest);
                break;

            case 5:
                smallest = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < smallest)
                        smallest = arr[i];
                }
                printf("Smallest element = %d\n", smallest);
                break;

            case 6:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}