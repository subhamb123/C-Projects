#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 10;
    int length = 8;
    int insertionIndex = 4;
    int value = 3;
    for(int i = length; i > insertionIndex; i--){
        A[i] = A[i-1];
    }
    A[insertionIndex] = value;
    length++;
    for(int i = 0; i < length; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
