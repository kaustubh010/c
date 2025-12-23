#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, lcm;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    lcm = (a > b) ? a : b;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM = %d", lcm);
            break;
        }
        lcm++;
    }

    getch();
}
