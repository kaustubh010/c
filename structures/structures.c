#include <stdio.h>
// #include <conio.h>
#include <string.h>

struct student{
    char name[30];
    int roll;
    int marks;
}s[100];

int main(){
// void main(){
    int n, i, j;
    // clrscr();
    for (i = 0; i < 2; i++){
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter rollNo: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
    for (i = 0; i < 2; i++){
        printf("\nName: %s\n",s[i].name);
        printf("RollNo: %d\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);
    }
    // getch();
    return 0;
}
