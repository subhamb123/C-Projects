#include<stdio.h>
#include<stdlib.h>

void printCall(int n){
    if(n > 0){
        printf("%d", n);
        printCall(n-1);
    }
}

void callPrint(int n){
    if(n > 0){
        callPrint(n-1);
        printf("%d", n);
    }
}

int main(){
    printCall(5);
    printf("\n");
    callPrint(5);
    return 0;
}
