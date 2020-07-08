#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int B[10] = {5, 23, 1, 349, 34, 4949, 3, 44};
    int C[30];
    int length = 8;
    int i = 0, j = 0, k = 0;
    while(i<length && j < length){
        if(A[i] < B[j]){
            C[k++] = A[j++];
        }
        else{
            C[k++] = B[j++];
        }
    }
    for(; i < length; i++){
        C[k++] = A[i];
    }
    for(; j < length; j++){
        C[k++] = B[j];
    }

    for(int i = 0; i < length*2; i++){
        printf("%d ", C[i]);
    }
    return 0;
}
