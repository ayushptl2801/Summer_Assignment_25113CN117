/*Write a program to Create marksheet generation system*/

#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Enter marks of 5 subjects:\n");
        printf("Subject 1: ");
        scanf("%f", &s[i].m1);
        printf("Subject 2: ");
        scanf("%f", &s[i].m2);
        printf("Subject 3: ");
        scanf("%f", &s[i].m3);
        printf("Subject 4: ");
        scanf("%f", &s[i].m4);
        printf("Subject 5: ");
        scanf("%f", &s[i].m5);

        // Calculate total and percentage
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5;
        s[i].percentage = s[i].total / 5;

        // Assign grade
        if (s[i].percentage >= 90)
            s[i].grade = 'A';
        else if (s[i].percentage >= 75)
            s[i].grade = 'B';
        else if (s[i].percentage >= 60)
            s[i].grade = 'C';
        else if (s[i].percentage >= 40)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    printf("\n========== MARKSHEET ==========\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No    : %d\n", s[i].rollNo);
        printf("Name       : %s\n", s[i].name);
        printf("Total      : %.2f\n", s[i].total);
        printf("Percentage : %.2f%%\n", s[i].percentage);
        printf("Grade      : %c\n", s[i].grade);
    }

    return 0;
}
