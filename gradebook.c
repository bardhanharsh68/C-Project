#include <stdio.h>

int main() {
    int n, i, marks;
    int topScore = 0;
    float sum = 0, average;

    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter marks of student %d: ", i);
        scanf("%d", &marks);

        sum += marks;

        if(marks > topScore)
            topScore = marks;

        if(marks >= 90)
            gradeA++;
        else if(marks >= 80)
            gradeB++;
        else if(marks >= 70)
            gradeC++;
        else if(marks >= 60)
            gradeD++;
        else
            gradeF++;
    }

    average = sum / n;

    printf("\n----- Class Statistics -----\n");
    printf("Average Marks: %.2f\n", average);
    printf("Top Score: %d\n", topScore);

    printf("\nGrade Distribution:\n");
    printf("A Grade: %d\n", gradeA);
    printf("B Grade: %d\n", gradeB);
    printf("C Grade: %d\n", gradeC);
    printf("D Grade: %d\n", gradeD);
    printf("F Grade: %d\n", gradeF);

    return 0;
}
