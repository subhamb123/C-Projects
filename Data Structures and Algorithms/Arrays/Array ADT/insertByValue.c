#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10] = {32, 233, 335, 993, 999, 1993, 3333, 33333};
    int size = 10;
    int length = 8;
    int value = 2929;
    int i = length - 1;
    while(A[i] > value){
        A[i+1] = A[i];
        i--;
    }
    A[i+1] = value;
    length++;
    for(int i = 0; i < length; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
