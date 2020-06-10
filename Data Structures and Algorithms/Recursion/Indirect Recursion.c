#include<stdio.h>
#include<stdlib.h>

void function1(int n){
    if(n>0){
        printf("%d ",n);
        function2(n-1);
    }
}
void function2(int n){
    if(n>1){
        printf("%d ",n);
        function1(n/2);
    }
}

int main() {
    function1(20);
    return 0;
}
