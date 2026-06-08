#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    float math, science, english;
    float total, average;
    char grade;
    
    // Input 
    printf("Enter marks for Mathematics (0-100): ");
    if (scanf("%f", &math) != 1) return 1;
    
    printf("Enter marks for Science (0-100): ");
    if (scanf("%f", &science) != 1) return 1;
    
    printf("Enter marks for English (0-100): ");
    if (scanf("%f", &english) != 1) return 1;

    // Processing
    // Total and Average
    total = math + science + english;
    average = total / 3.0;

    // Grading System
    if (average >= 80.0 && average <= 100.0) {
        grade = 'A';
    } else if (average >= 70.0) {
        grade = 'B';
    } else if (average >= 60.0) {
        grade = 'C';
    } else if (average >= 50.0) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Pass / Fail Rule 
    int isPass = 1; 
    if (math < 40.0 || science < 40.0 || english < 40.0) {
        isPass = 0; 
    }

    // Find Highest Mark and Track the Subject
    float highest = math;
    const char* highestSubject = "Mathematics";

    if (science > highest) {
        highest = science;
        highestSubject = "Science";
    }
    if (english > highest) {
        highest = english;
        highestSubject = "English";
    }

    // Distinction Check
    int hasDistinction = 0;
    if (average >= 85.0 && math >= 80.0 && science >= 80.0 && english >= 80.0) {
        hasDistinction = 1;
    }

    // Output
    printf("\n=============================\n");
    printf("    STUDENT PERFORMANCE      \n");
    printf("=============================\n");
    printf("Total:        %.2f\n", total);
    printf("Average:      %.2f\n", average);
    printf("Grade:        %c\n", grade);
    
    if (isPass) {
        if (hasDistinction) {
            printf("Result:       PASS (with Distinction!☆☆☆︎)\n");
        } else {
            printf("Result:       PASS\n");
        }
    } else {
        printf("Result:       FAIL\n");
    }
    
    printf("Highest Mark: %.2f (%s)\n", highest, highestSubject);
    printf("=============================\n");

    return 0;
}
