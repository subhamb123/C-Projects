#include<stdio.h>
#include<stdlib.h>

void solution(int n,int A,int B,int C){
    if(n>0){
        solution(n-1, A, C, B);
        printf("Move topmost disk on tower %d to tower %d\n", A, C);
        solution(n-1, B, A, C);
    }
}

int main(){
    solution(4, 1, 2, 3);
    return 0;
}
