#include <stdio.h>
#include <conio.h>

void main() {
    int n, count = 0;
    clrscr();
    printf("Enter an integer: ");
    scanf("%d", &n);

    do {
        n = n / 10;
        count++;
    } while (n != 0);

    printf("Number of digits = %d", count);
    getch();
}
