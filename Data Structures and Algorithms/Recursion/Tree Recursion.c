#include<stdio.h>
#include<stdlib.h>

void treeRecursion(int n){
    if(n>0){
        printf("%d ",n);
        treeRecursion(n-1);
        treeRecursion(n-1);
    }
}

int main() {
    treeRecursion(3);
    return 0;
}
