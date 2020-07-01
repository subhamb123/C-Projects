#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int length = 8;
    int size = 10;
    int deletionIndex = 3;
    int value = A[deletionIndex];
    for(int i = deletionIndex; i < length - 1; i++){
        A[i] = A[i+1];
    }
    length--;
    for(int i = 0; i < length; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
