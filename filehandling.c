#include <stdio.h>
struct Student {
    char name[50];
    float marks;
};
int main() {
    FILE *file;
    struct Student student;
    file = fopen("students_data.txt", "w");

    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return 1; 
    }
    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    fprintf(file, "Name: %s\nMarks: %.2f\n", student.name, student.marks);

    fclose(file);

    printf("Data written to the file successfully.\n");

    file = fopen("students_data.txt", "r");

    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }

    printf("\nReading student data from the file:\n");
    fscanf(file, "Name: %s\nMarks: %f", student.name, &student.marks);
    printf("Name: %s\nMarks: %.2f\n", student.name, student.marks);

    fclose(file);

    return 0;
}
