#include <stdio.h>
#include <conio.h>

void main() {
    int i, j, factor;
    clrscr();
    for (i = 1; i <= 100; i++) {
        factor = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0)
                factor++;
        }

        if (factor == 2)
            printf("%d ", i);
    }

    getch();
}
