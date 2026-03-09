#include <stdio.h>

struct student {
    int id;
    char name[20];
    float marks;
};

int main() {

    struct student s[10];
    int i, n = 0, choice;

    while (1) {

        printf("\n---- Student Management System ----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Student ID: ");
                scanf("%d", &s[n].id);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No student records found.\n");
                } else {
                    for (i = 0; i < n; i++) {
                        printf("\nID: %d", s[i].id);
                        printf("\nName: %s", s[i].name);
                        printf("\nMarks: %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
