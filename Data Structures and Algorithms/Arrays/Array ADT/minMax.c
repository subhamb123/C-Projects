#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[11] = {1, 3, 4, 34, 5, 6, 12, 7, 8, 1, 9};
    int length = 11, min = A[0], max = A[0];

    for(int i = 0; i < length; i++){
        printf("%d ", A[i]);
    }

    for(int i = 1; i < length; i++){
        if(A[i] < min)
            min = A[i];
        else if(A[i] > max)
            max = A[i];
    }

    printf("\nMin: %d", min);
    printf("\nMax: %d", max);

    return 0;
}
