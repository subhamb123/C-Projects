#include<stdio.h>
#include<stdlib.h>

struct cards{
    int face;
    int color;
};
struct test{
    int A[5];
    int n;
};
void changeLength(struct cards *p, int n){
    (*p).face = n;
}
void doSomething(struct test t){
    t.A[0] = 6;
}
int main(){
    struct cards deck[3] = {{1, 1}, {1, 0}, {0, 0}};
    struct cards a = {4, 5};
    struct cards *p = &a;
    (*p).face = 1;
    printf("%d\n%d\n%s", deck[0].color, deck[2].face, (*p).face==a.face ? "True":"False");

    changeLength(&a, 20);
    printf("\n%d", a.face);

    struct test t = {{5,5,5,5,5}, 1};
    doSomething(t);
    printf("\nValue didn't change because values in array only change by pass by address.\nValue of 0th index: %d", t.A[0]);
    return 0;
}

