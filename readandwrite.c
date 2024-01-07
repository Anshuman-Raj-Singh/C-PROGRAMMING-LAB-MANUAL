#include <stdio.h>

int main() {
    FILE *file;
    char input[100];

    file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; 
    }

    printf("Enter text to write to the file:\n");
    fgets(input, sizeof(input), stdin);

    fprintf(file, "%s", input);

    fclose(file);

    printf("Data written to the file successfully.\n");

    return 0;
}
