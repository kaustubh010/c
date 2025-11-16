#include <stdio.h>

#define MAX 100

int main() {
    int n;
    char names[MAX][50];
    char branches[MAX][30];
    float marks10[MAX];
    float marks12[MAX];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]s", names[i]);

        printf("Branch: ");
        scanf(" %[^\n]s", branches[i]);

        printf("10th Marks: ");
        scanf("%f", &marks10[i]);

        printf("12th Marks: ");
        scanf("%f", &marks12[i]);
    }

    printf("\n\t \t \t \t\n", "Name", "Branch", "10th Marks", "12th Marks");
    printf("-----------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-20s %-15s %-12.2f %-12.2f\n",
               names[i], branches[i], marks10[i], marks12[i]);
    }

    return 0;
}
