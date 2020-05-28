#include<stdio.h>
#include<stdlib.h>

struct cards{
    int face;
    int color;
};
int main(){
    struct cards deck[3] = {{1, 1}, {1, 0}, {0, 0}};
    struct cards a = {4, 5};
    struct cards *p = &a;
    (*p).face = 1;
    printf("%d\n%d\n%s", deck[0].color, deck[2].face, (*p).face==a.face ? "True":"False");
    return 0;
}
