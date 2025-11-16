#include <stdio.h>
#include <conio.h>

void main() {
    int a[5], i, pos=-1, find;
    clrscr();
    printf("Enter Numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter number to find: ");
    scanf("%d",&find);

    // Index Search
    for(i = 0; i < 5; i++) {
        if(a[i] == find){
            pos = i;
        }
    }

    if(pos>-1){
        printf("Found at %d", pos+1);
    }
    else{
        printf("not found");
    }
    getch();
}
