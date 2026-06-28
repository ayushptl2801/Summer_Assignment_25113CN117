/*Write a program to Create inventory management system*/

#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p;
    int choice, searchId, newQty;

    do {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display Product\n");
        printf("3. Update Quantity\n");
        printf("4. Search Product\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &p.id);

                printf("Enter Product Name: ");
                scanf(" %[^\n]", p.name);

                printf("Enter Quantity: ");
                scanf("%d", &p.quantity);

                printf("Enter Price: ");
                scanf("%f", &p.price);

                printf("Product added successfully!\n");
                break;

            case 2:
                printf("\n----- Product Details -----\n");
                printf("Product ID   : %d\n", p.id);
                printf("Product Name : %s\n", p.name);
                printf("Quantity     : %d\n", p.quantity);
                printf("Price        : %.2f\n", p.price);
                break;

            case 3:
                printf("Enter New Quantity: ");
                scanf("%d", &newQty);
                p.quantity = newQty;
                printf("Quantity updated successfully!\n");
                break;

            case 4:
                printf("Enter Product ID to Search: ");
                scanf("%d", &searchId);

                if (searchId == p.id) {
                    printf("\nProduct Found!\n");
                    printf("Product ID   : %d\n", p.id);
                    printf("Product Name : %s\n", p.name);
                    printf("Quantity     : %d\n", p.quantity);
                    printf("Price        : %.2f\n", p.price);
                } else {
                    printf("Product not found!\n");
                }
                break;

            case 5:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}