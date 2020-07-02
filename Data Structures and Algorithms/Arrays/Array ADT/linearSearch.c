#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 10;
    int length = 8;
    int value = 8;
    bool x = false;
    for(int i = 0; i < length; i++){
        if (value == A[i]){
            printf("The index your value is at is %d\n", i);

            //For more efficiency next time if same value is called.
            int temp = A[0];
            A[0] = A[i];
            A[i] = temp;

            x = true;
            break;
        }
    }

    if (x == false)
        printf("Your value isn't in the array.\n");

    for(int i = 0; i < length; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
