#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int B[10];
    int C[10] = {5, 23, 1, 349, 34, 4949, 3, 44};
    int size = 10;
    int length = 8;

    for(int i = length - 1, j = 0; i >= 0; i--, j++){
        B[j] = A[i];
    }

    for(int i = 0; i < length; i++){
        A[i] = B[i];
    }

    for(int i = 0, j = length - 1; i < j; i++, j--){
        int temp = C[i];
        C[i] = C[j];
        C[j] = temp;
    }
    for(int i = 0; i < length; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    for(int i = 0; i < length; i++){
        printf("%d ", C[i]);
    }
    return 0;
}
