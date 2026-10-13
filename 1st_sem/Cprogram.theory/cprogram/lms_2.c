#include <stdio.h>

// Function to calculate total marks
int total(int marks[]){
    int sum = 0, i;
 // Add marks of five subjects
    for (i = 0; i < 5; i++)
        sum = sum + marks[i];

    return sum;
}

// Function to calculate average
float average(int totalmarks){
    return totalmarks / 5.0;
}

// Function to calculate percentage
float percentage(int t){
    return (t / 500.0) * 100;
}

// Function to check pass or fail
int checkResult(int marks[]){
    int i;
// Check marks in every subject
    for (i = 0; i < 5; i++){
        if (marks[i] < 35)
            return 0;  // Fail
    }
    return 1;  // Pass
}

int main(){
    // Declare arrays for student details
    int roll[5], marks[5][5];
    int totalMarks[5], i, j;
    float avg[5], per[5];
    char name[5][30];

    // Input details of five students
    for (i = 0; i < 5; i++){
        printf("\nEnter roll number: ");
        scanf("%d", &roll[i]);

        printf("Enter name: ");
        scanf("%29s", name[i]);

        // Input marks in five subjects
        printf("Enter marks in 5 subjects:\n");

        for (j = 0; j < 5; j++){
            scanf("%d", &marks[i][j]);
        }

        // Calculate total, average and percentage
        totalMarks[i] = total(marks[i]);
        avg[i] = average(totalMarks[i]);
        per[i] = percentage(totalMarks[i]);
    }

    // Display the result table
    printf("\nROLL NAME       S1 S2 S3 S4 S5 TOTAL AVERAGE PERCENT RESULT\n");

    for (i = 0; i < 5; i++){
        printf("%-5d %-12s ", roll[i], name[i]);

        // Display marks of five subjects
        for (j = 0; j < 5; j++)
            printf("%2d ", marks[i][j]);

        // Display total, average and percentage
        printf("%5d %7.2f %7.2f ",
               totalMarks[i], avg[i], per[i]);

        // Display pass or fail
        if (checkResult(marks[i]) == 1)
            printf("PASS\n");
        else
            printf("FAIL\n");
    }

    return 0;  
}