#include<stdio.h>
#include<stdlib.h>

int main(){
    char x[] = "SubHAm is       goOd";
    int vcount = 0, ccount = 0, words = 1;
    for(int i = 0; x[i] != '\0'; i++){
        if(x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U' || x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u')
            vcount++;
        else if((x[i] >= 65 && x[i] <= 90) || (x[i] >= 97 && x[i] <= 122))
            ccount++;
    }

    for(int i = 0; x[i] != '\0'; i++){
        if(x[i] == ' ' && x[i-1] != ' ')
            words++;
    }

    printf("%s has %d vowels, %d consonants, and %d words.", x, vcount, ccount, words);
    return 0;
}
