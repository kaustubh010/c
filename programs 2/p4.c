#include <stdio.h>
#include <conio.h>

int main() {
    // clrscr();
    int a, b, o;
    printf("Enter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    printf("Options: 1: +, 2: -, 3: *, 4: /\n Your Option: ");
    scanf("%d",&o);
    switch (o)
    {
    case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;
    case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;
    case 3:
        printf("%d * %d = %d",a,b,a*b);
        break;
    case 4:
        printf("%d / %d = %f",a,b,(float)a/b);
        break;
        
    default:
        printf("Please enter valid values");
        break;
    }
    // getch();
    return 0;
}