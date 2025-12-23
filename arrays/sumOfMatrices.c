#include <stdio.h>
#include <conio.h>

int main() {
// void main() {
    int a[3][3], b[3][3], c[3][3], i, j;
    // clrscr();
    printf("Enter matrice a: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrice b: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of matrice a and b is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    // getch();
    return 0;
}