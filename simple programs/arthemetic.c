#include <stdio.h>
#include <conio.h>

int main() {
    // clrscr();
    int a,b;
    printf("Enter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %f\n",a,b,(float)a/b);
    // getch();
    return 0;
}