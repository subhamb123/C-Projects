#include<stdio.h>
#include<stdlib.h>

int main(){
    char x[] = "SubHAm is goOd";
    if(validate(x))
        printf("Valid string.");
    else
        printf("Invalid string.");
    return 0;
}

int validate(char *name){
    for(int i = 0; name[i] != '\0'; i++){
        if(!(name[i] >= 65 && name[i] <= 90) || !(name[i] >= 97 && name[i] <= 122) || !(name[i] >= 48 && name[i] <= 57))
            return 0;
    }
    return 1;
}
