#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {3, 2, 3, 4, 5, 6, 7, 8};
    int size = 10;
    int length = 8;
    bool x = true;

    for(int i = 0; i < length; i++){
        printf("%d ", A[i]);
    }

    for(int i = 0; i < length - 1; i++){
        if(A[i] > A[i+1]){
            printf("\nArray isn't sorted.");
            x = false;
            break;
        }
    }
    if(x){
        printf("\nArray is sorted.");
    }
    return 0;
}
