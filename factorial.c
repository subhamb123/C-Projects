#include <stdio.h>
#include <stdlib.h>

int fact(int a);

int main(){

    int a, b, c = 1;

    puts("Enter a number.");
    scanf("%d", &a);

    for (b = a; b>=1; b--){
        c = c * b;
    }
    printf("The factorial value of %d using for loop is %d.\n", a, c);
    printf("The factorial value of %d using recursion is %d.", a, fact(a));
    return 0;
}

int fact(int a){
    if (a<=1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
