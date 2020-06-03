#include<stdio.h>
#include<stdlib.h>

struct cards{
    int face;
    int color;
};
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int * arr(int n){
    int *p;
    p = (int *)malloc(n*sizeof(int));
    return (p);
}
int main(){
    int *r;
    r = (int *)malloc(5*sizeof(int));

    struct cards *p;
    p = (struct cards *)malloc(sizeof(struct cards));
    (*p).face = 1;
    printf("%d\n", (*p).face);

    int a = 5;
    int b = 10;
    swap(&a, &b);
    printf("%d, %d", a, b);

    int *c;
    c = arr(5);
    c[0] = 5;
    printf("\n%d", c[0]);
    free(c);
    int y = 10;
    c = &y;
    printf("\n%d", *c);
    return 0;
}
