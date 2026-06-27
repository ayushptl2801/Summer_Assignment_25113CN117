/*Write a program to Create salary management system*/

#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float basicSalary, hra, da, netSalary;
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

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        // Calculate HRA and DA
        emp[i].hra = emp[i].basicSalary * 0.20;   // 20% HRA
        emp[i].da = emp[i].basicSalary * 0.10;    // 10% DA

        // Calculate Net Salary
        emp[i].netSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    // Display salary details
    printf("\n===== Salary Details =====\n");

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", emp[i].empId);
        printf("Name        : %s\n", emp[i].name);
        printf("Basic Salary: %.2f\n", emp[i].basicSalary);
        printf("HRA         : %.2f\n", emp[i].hra);
        printf("DA          : %.2f\n", emp[i].da);
        printf("Net Salary  : %.2f\n", emp[i].netSalary);
    }

    return 0;
}