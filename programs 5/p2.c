#include <stdio.h>
// #include <conio.h>
#include <string.h>

int main() {
// void main() {
    char s[1000];
    int l=0,i,vow=0,sp=0,dig=0;
    // clrscr();
    printf("Enter Sentence: ");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vow++;
        }
        if(s[i]==' '){
            sp++;
        }
        if(s[i]>='0' && s[i]<='9'){
            dig++;
        }
    }
    printf("Length of sentence: %d\n",l);
    printf("Total vowels: %d\n",vow);
    printf("Total spaces: %d\n",sp);
    printf("Total digits: %d\n",dig);
    // getch();
    // return 0;
}