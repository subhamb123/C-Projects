#include<stdio.h>
#include<stdlib.h>

int main(){
    char x = 'A';
    char *y = "John";
    char z[] = {'J', 'o', 'h', 'n', '\0'};
    char a[] = {77, 78, 79, 80, 81};
    char b[] = "John";

    printf("%c\n", x);
    printf("%s\n", y);
    printf("%c\n", z[1]);
    printf("%c\n", a[3]);
    printf("%c\n", b[2]);
    return 0;
}
