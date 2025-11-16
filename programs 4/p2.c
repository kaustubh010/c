#include <stdio.h>
#include <conio.h>

void main() {
    int a[5], i, j, c;
    clrscr();
    printf("Enter Numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble Sort
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(a[j] > a[j + 1]) {
                c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    getch();
}
