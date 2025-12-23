#include <stdio.h>
#include <conio.h>

int main() {
    // clrscr();
    int a,b;
    printf("Enter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    if(a==b){
        printf("%d is equal to %d",a,b);
    }
    else if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else {
        printf("%d is less than %d",a,b);
    }
    // getch();
    return 0;
}