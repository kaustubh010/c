#include <stdio.h>
// #include <conio.h>

int main() {
// void main() {
    int arr[3][4],i,j,max,min;
    // clrscr();

    printf("Enter 3x4 matrice: ");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    max=min=arr[0][0];
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    printf("largest is %d and smallest is %d in the array", max,min);
    // getch();
    return 0;
}