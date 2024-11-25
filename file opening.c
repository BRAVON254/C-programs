
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *file;
    struct Student students[5];

    // Open file in write mode
    file = fopen("student_records.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read name and marks of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &students[i].marks);

        // Write student details to file
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    printf("Student records saved to file.\n");

    // Close the file
    fclose(file);

    return 0;
}