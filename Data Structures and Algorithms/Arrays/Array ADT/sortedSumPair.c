#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14};
    int length = 11, sum = 7;

    for(int i = 0; i < length; i++){
        printf("%d ", A[i]);
    }

    for(int i = 0, j = length - 1; i < j;){
        if(A[i] + A[j] == sum){
            printf("\n%d + %d = %d", A[i], A[j], sum);
            i++;
            j--;
        }
        else if(A[i] + A[j] < sum)
            i++;
        else
            j--;
    }

    return 0;
}
