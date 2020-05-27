#include<stdio.h>
#include<stdlib.h>

struct cards{
    int face;
    int color;
};
int main(){
    struct cards deck[3] = {{1, 1}, {1, 0}, {0, 0}};;
    printf("%d\n%d", deck[0].color, deck[2].face);
    return 0;
}
