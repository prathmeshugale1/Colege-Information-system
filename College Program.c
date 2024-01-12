#include <stdio.h>
#include <string.h>

// Define structures for student, teacher, and staff
struct Student {
    char name[50];
    int rollNumber;
    float GPA;
};

struct Teacher {
    char name[50];
    char subject[50];
};

struct Staff {
    char name[50];
    char position[50];
};

// Function to add information for a student
void addStudent(struct Student *students, int *studentCount) {
    printf("\nEnter student name: ");
    scanf("%s", students[*studentCount].name);
    printf("Enter roll number: ");
    scanf("%d", &students[*studentCount].rollNumber);
    printf("Enter GPA: ");
    scanf("%f", &students[*studentCount].GPA);

    (*studentCount)++;
}

// Function to add information for a teacher
void addTeacher(struct Teacher *teachers, int *teacherCount) {
    printf("\nEnter teacher name: ");
    scanf("%s", teachers[*teacherCount].name);
    printf("Enter subject: ");
    scanf("%s", teachers[*teacherCount].subject);

    (*teacherCount)++;
}

// Function to add information for a staff member
void addStaff(struct Staff *staff, int *staffCount) {
    printf("\nEnter staff name: ");
    scanf("%s", staff[*staffCount].name);
    printf("Enter position: ");
    scanf("%s", staff[*staffCount].position);

    (*staffCount)++;
}

// Function to display information for all students
void displayStudents(struct Student *students, int studentCount) {
    printf("\n--- Students Information ---\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Name: %s, Roll Number: %d, GPA: %.2f\n", students[i].name, students[i].rollNumber, students[i].GPA);
    }
}

// Function to display information for all teachers
void displayTeachers(struct Teacher *teachers, int teacherCount) {
    printf("\n--- Teachers Information ---\n");
    for (int i = 0; i < teacherCount; i++) {
        printf("Name: %s, Subject: %s\n", teachers[i].name, teachers[i].subject);
    }
}

// Function to display information for all staff members
void displayStaff(struct Staff *staff, int staffCount) {
    printf("\n--- Staff Information ---\n");
    for (int i = 0; i < staffCount; i++) {
        printf("Name: %s, Position: %s\n", staff[i].name, staff[i].position);
    }
}

int main() {
    struct Student students[50];
    struct Teacher teachers[20];
    struct Staff staff[20];

    int studentCount = 0;
    int teacherCount = 0;
    int staffCount = 0;

    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. Add Teacher\n");
        printf("3. Add Staff\n");
        printf("4. Display Students\n");
        printf("5. Display Teachers\n");
        printf("6. Display Staff\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &studentCount);
                break;
            case 2:
                addTeacher(teachers, &teacherCount);
                break;
            case 3:
                addStaff(staff, &staffCount);
                break;
            case 4:
                displayStudents(students, studentCount);
                break;
            case 5:
                displayTeachers(teachers, teacherCount);
                break;
            case 6:
                displayStaff(staff, staffCount);
                break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
