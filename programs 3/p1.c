#include <stdio.h>
#include <conio.h>

void main() {
    int n, i = 1;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    getch();
}
