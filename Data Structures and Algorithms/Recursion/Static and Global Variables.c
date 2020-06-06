#include<stdio.h>
#include<stdlib.h>

int y = 0;

int staticVar(int n){
    static int x=0;
    if(n>0){
        x++;
        return staticVar(n-1)+x;
    }
    return 0;
}

int globalVar(int n){
    if(n>0){
        y++;
        return globalVar(n-1)+y;
    }
    return 0;
}

int main() {
    printf("Static Variable: %d\n", staticVar(5));
    printf("Global Variable: %d\n", globalVar(5));
    return 0;
}
