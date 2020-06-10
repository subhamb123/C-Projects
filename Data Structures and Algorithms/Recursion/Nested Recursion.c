#include<stdio.h>
#include<stdlib.h>

int nestedRecursion(int n){
    if(n>100){
        return n-10;
    }
    return nestedRecursion(nestedRecursion(n+11));
}

int main() {
    printf("%d", nestedRecursion(95));
    return 0;
}
