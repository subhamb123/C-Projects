#include<stdio.h>
#include<stdlib.h>

int F[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

int fibonacci(int n){
    if(n <= 1)
        return n;
    return fibonacci(n-2) + fibonacci(n-1);
}

int fastFib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1)
            F[n-2] = fastFib(n-2);
        if(F[n-1] == -1)
            F[n-1] = fastFib(n-1);
        F[n] = F[n-2] + F[n-1];
        return F[n-2] + F[n-1];
    }
}

int main(){
    printf("5th element in normal series: %d \n6th element in fast series: %d \n", fibonacci(5), fastFib(6));
    return 0;
}
