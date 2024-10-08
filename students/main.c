#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// define struct
typedef struct {
    char name[20];
    int age;
    float score[5];
    float average;
} Student;

float calculateAverage(const float scores[5]) {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    return sum / 5;
}

void addStudent(Student studentsList[], int *size) {
    if ((*size) >= 4) {
        printf("Error: Too many students\n");
        return;
    }

    Student student;
    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    for (int i = 0; i < 5; i++) {
        printf("Enter score %d: ", i+1);
        scanf("%f", &student.score[i]);
    }

    student.average = calculateAverage(student.score);

    studentsList[*size] = student;
    (*size)++;
}

void printStudents(Student studentsList[], int size) {
    for (int i = 0; i < size; i++) {

        printf("Name: %s\n", studentsList[i].name);
        printf("Age: %d\n", studentsList[i].age);
        printf("Average: %.2f\n", studentsList[i].average);
        for (int j = 0; j < 5; j++) {
            printf("Score %d: %.2f\n", i+1, studentsList[i].score[j]);
        }
        printf("\n");
    }
}

int main(void) {
    int size = 0;
    int option;

    do {
        Student studentsList[5];
        printf("\nMenu:\n");
        printf("1. add student\n");
        printf("2. show students\n");
        printf("3. exit\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                addStudent(studentsList, &size);
                break;
            case 2:
                printStudents(studentsList, size);
                break;
            case 3:
                printf("Exiting...\n");
            break;
            default:
                printf("Invalid option.\n");
        }
    } while (option != 3);

    return 0;
}


