/*Write a program to Create mini employee management system*/

#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp[MAX];
    int choice, n = 0, i, id, found;

    do {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);

                printf("Enter Department: ");
                scanf(" %[^\n]", emp[n].department);

                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No employee records found!\n");
                } else {
                    printf("\n----- Employee List -----\n");
                    printf("ID\tName\t\tDepartment\tSalary\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%s\t\t%.2f\n",
                               emp[i].id,
                               emp[i].name,
                               emp[i].department,
                               emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(emp[i].id == id) {
                        printf("\nEmployee Found!\n");
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Department : %s\n", emp[i].department);
                        printf("Salary     : %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found!\n");
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