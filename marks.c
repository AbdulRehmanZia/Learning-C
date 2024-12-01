#include <stdio.h>


void inputMarks(int marks[], int size) {
    printf("Enter marks for %d students:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}


void displayMarks(int marks[], int size) {
    printf("Marks of students:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }
}


float calculateAverage(int marks[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return (float)sum / size;
}


int findHighestMark(int marks[], int size) {
    int highest = marks[0];
    for (int i = 1; i < size; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}


int findLowestMark(int marks[], int size) {
    int lowest = marks[0];
    for (int i = 1; i < size; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    return lowest;
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    int marks[size];

    
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Input Marks\n");
        printf("2. Display Marks\n");
        printf("3. Calculate Average\n");
        printf("4. Find Highest Mark\n");
        printf("5. Find Lowest Mark\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputMarks(marks, size);
                break;
            case 2:
                displayMarks(marks, size);
                break;
            case 3:
                printf("Average marks: %.2f\n", calculateAverage(marks, size));
                break;
            case 4:
                printf("Highest mark: %d\n", findHighestMark(marks, size));
                break;
            case 5:
                printf("Lowest mark: %d\n", findLowestMark(marks, size));
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}