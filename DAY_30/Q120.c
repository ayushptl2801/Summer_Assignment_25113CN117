/*Write a program to Develop complete mini project using arrays, strings and functions*/

//------COLLEGE ADMISSION SYSTEM------

#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    float percentage;
    char course[30];
};

struct Student s[MAX];
int n = 0;

// Add Student
void addStudent() {
    printf("Enter Student ID: ");
    scanf("%d", &s[n].id);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Percentage: ");
    scanf("%f", &s[n].percentage);

    printf("Enter Course: ");
    scanf(" %[^\n]", s[n].course);

    n++;
    printf("Admission record added successfully!\n");
}

// Display Students
void displayStudents() {
    int i;

    if (n == 0) {
        printf("No admission records found!\n");
        return;
    }


    printf("\n----- Admission Records -----\n");
    printf("ID\tName\t\tPercentage\tCourse\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\t\t%s\n",
               s[i].id,
               s[i].name,
               s[i].percentage,
               s[i].course);
    }
}

// Search Student
void searchStudent() {
    int id, i;

    printf("Enter Student ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++) {
        if (s[i].id == id) {
            printf("\nStudent Found!\n");
            printf("ID         : %d\n", s[i].id);
            printf("Name       : %s\n", s[i].name);
            printf("Percentage : %.2f\n", s[i].percentage);
            printf("Course     : %s\n", s[i].course);
            return;
        }
    }

    printf("Student not found!\n");
}

// Delete Student
void deleteStudent() {
    int id, i, j;

    printf("Enter Student ID to Delete: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++) {
        if (s[i].id == id) {
            for (j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            n--;
            printf("Admission record deleted successfully!\n");
            return;
        }
    }

    printf("Student not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== College Admission System =====\n");
        printf("1. Add Admission Record\n");
        printf("2. Display Records\n");
        printf("3. Search Student\n");
        printf("4. Delete Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}