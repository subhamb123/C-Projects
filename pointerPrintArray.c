#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
int size, array[10];
    puts("Enter number of elements in the array.");
    scanf("%d", &size);

    for (int i = 1; i<=size; i++){
        printf("Element %d\n", i);
        scanf("%d", &array[i-1]);
    }

    puts("Every element printed using pointers");
    for (int i = 1; i<=size; i++){
        printf("Element %d: %d\n", i, *(array + i - 1));
    }

    return 0;
}
