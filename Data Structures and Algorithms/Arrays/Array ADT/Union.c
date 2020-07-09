#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int B[10] = {3, 5, 2, 434, 1};
    int C[20];
    int lengthA = 8;
    int lengthB = 5;
    int lengthC = 13;

    for(int i = 0; i < lengthA; i++){
        C[i] = A[i];
    }

    int k = lengthA;
    for(int i = 0; i < lengthB; i++){
        int x = 0;
        for(int j = 0; j < lengthA; j++){
            if(A[j] == B[i]){
                break;
            }
            x++;
        }
        if(x == lengthA){
            C[k] = B[i];
            k++;
        }
    }

    for(int i = 0; i < lengthC; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
