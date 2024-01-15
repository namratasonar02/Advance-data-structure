#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float totalMarks, averageMarks, percentage;

    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &subject4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &subject5);

    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;

    averageMarks = totalMarks / 5;

    percentage = (totalMarks / 500) * 100;

    printf("Total Marks: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}





