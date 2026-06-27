/*Write a program to Create employee management system*/

#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\n===== Employee Records =====\n");

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", emp[i].empId);
        printf("Employee Name : %s\n", emp[i].name);
        printf("Salary        : %.2f\n", emp[i].salary);
    }

    return 0;
}
