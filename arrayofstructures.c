#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void inputStudentInfo(struct Student students[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter student name: ");
        scanf("%s", students[i].name);

        printf("Enter student roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter student marks: ");
        scanf("%f", &students[i].marks);
    }
}

void displayStudentInfo(struct Student students[], int numStudents) {
    printf("\nStudent Information:\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

void calculateAverageMarks(struct Student students[], int numStudents) {
    float totalMarks = 0;
    for (int i = 0; i < numStudents; ++i) {
        totalMarks += students[i].marks;
    }
    float averageMarks = totalMarks / numStudents;

    printf("Average Marks: %.2f\n", averageMarks);
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    inputStudentInfo(students, numStudents);

    displayStudentInfo(students, numStudents);

    calculateAverageMarks(students, numStudents);

    return 0;
}
