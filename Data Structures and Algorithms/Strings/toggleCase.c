#include<stdio.h>
#include<stdlib.h>

int main(){
    char x[] = "SubHAm";
    char y[] = "SubHAm";
    for(int i = 0; y[i] != '\0'; i++){
        if(y[i] >= 65 && y[i] <= 90)
            y[i] += 32;
        else if(y[i] >= 'a' && y[i] <= 'z')
            y[i] -= 32;
    }
    printf("Toggling case of %s yields %s.", x, y);
    return 0;
}
