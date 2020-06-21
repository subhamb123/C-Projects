#include<stdio.h>
#include<stdlib.h>

int main() {
    int A[5] = {1, 2, 3, 4, 5};
    int B[5];
    printf("Numbers: %d, %d \nPointer: %p, Unnamed: %u", A[2], *(A+2), A+2, B);
    return 0;
}
