/*Write a program to Create student record system using arrays and strings*/

#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[MAX];
    int choice, n = 0, i, roll, found;

    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Student Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student record added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No records found!\n");
                } else {
                    printf("\n----- Student Records -----\n");
                    printf("Roll\tName\t\tMarks\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%.2f\n",
                               s[i].roll, s[i].name, s[i].marks);
                    }
                }
                break;

            case 3:
                if (n == 0) {
                    printf("No records available!\n");
                    break;
                }

                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("\nStudent Found!\n");
                        printf("Roll No : %d\n", s[i].roll);
                        printf("Name    : %s\n", s[i].name);
                        printf("Marks   : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Student not found!\n");
                break;

            case 4:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}