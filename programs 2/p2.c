#include <stdio.h>
#include <conio.h>

int main() {
    // clrscr();
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("%d is even",a);
    }
    else{
        printf("%d is odd",a);
    }
    // getch();
    return 0;
}