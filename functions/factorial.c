#include <stdio.h>
// #include <conio.h>

long int factorial(int n);

int main() {
// void main() {
    int n;
    // clrscr();
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %ld",n,factorial(n));
    // getch();
    return 0;
}

long int factorial(int n){
    if(n>=1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}