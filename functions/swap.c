#include <stdio.h>
#include <conio.h>

void swap(int,int);

int main() {
// void main() {
    int a,b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("before swap a: %d and b: %d\n",a,b);
    swap(a,b);
    // getch();
    return 0;
}

void swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swap a: %d and b: %d\n",a,b);
}