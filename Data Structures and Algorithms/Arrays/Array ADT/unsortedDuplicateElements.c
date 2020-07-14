#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {1, 7, 10, 12, 12, 12, 15, 15};
    int length = 8;

    for(int i = 0; i < length-1; i++){
        int count = 1;
        if(A[i] != -1){
            for(int j = i+1; j < length; j++){
                if(A[i] == A[j]){
                    count++;
                    A[j] = -1;
                }
            }
        }
        if(count > 1)
            printf("%d is appearing %d times.\n", A[i], count);
    }

    return 0;
}
