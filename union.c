#include <stdio.h>
union StudentInfo {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {

    union StudentInfo student;

    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter student roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter student marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Information:\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
