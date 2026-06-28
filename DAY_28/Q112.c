/*Write a program to Create contact management system*/

#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c;
    int choice;
    char searchName[50];

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", c.name);

                printf("Enter Phone Number: ");
                scanf("%s", c.phone);

                printf("Enter Email: ");
                scanf("%s", c.email);

                printf("Contact added successfully!\n");
                break;

            case 2:
                printf("\n----- Contact Details -----\n");
                printf("Name  : %s\n", c.name);
                printf("Phone : %s\n", c.phone);
                printf("Email : %s\n", c.email);
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", searchName);

                if(strcmp(c.name, searchName) == 0) {
                    printf("\nContact Found!\n");
                    printf("Name  : %s\n", c.name);
                    printf("Phone : %s\n", c.phone);
                    printf("Email : %s\n", c.email);
                } else {
                    printf("Contact not found!\n");
                }
                break;

            case 4:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}