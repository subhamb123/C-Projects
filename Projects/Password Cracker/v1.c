#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char password[30] = "";
    char guess[30] = "";
    int guesses = 0;
    bool x = true;

    char com1[] = "abc", com2[] = "ABC", com3[] = "123", com4[] = "abcdefghjklmnopqrstuvwxyz", com5[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", com6[] = "qwerty", com7[] = "qwertyuiop", com8[] = "qwertyuiopasdfghjklzxcvbnm", com9[] = "QWERTY", com10[] = "QWERTYUIOP", com11[] = "QWERTYUIOPASDFGHJKLZXCVBNM", com12[] = "1234567890";
    puts("Enter an alphanumeric password that is less than 30 characters long.");
    gets(password);

    int length = 0;
    for(length; password[length] != '\0'; length++){

    }
    if(strcmp(com1, password) == 0 || strcmp(com2, password) == 0 || strcmp(com3, password) == 0 || strcmp(com4, password) == 0 || strcmp(com5, password) == 0 || strcmp(com6, password) == 0 || strcmp(com7, password) == 0 || strcmp(com8, password) == 0 || strcmp(com9, password) == 0 || strcmp(com10, password) == 0 || strcmp(com11, password) == 0 || strcmp(com12, password) == 0){
        printf("It took 1 attempt to crack your simple password: %s", password);
        return 0;
    }
    while(true){
        for(int i = 0; i < length; i++){
            int number = rand() % 3;
            if(number == 0){
                int num = (rand() % 10) + 48;
                guess[i] = num;
            }
            else if(number == 1){
                int num = (rand() % 26) + 65;
                guess[i] = num;
            }
            else{
                int num = (rand() % 26) + 97;
                guess[i] = num;
            }
        }
        for(int i = 0; i < length; i++){
            if(password[i] != guess[i]){
                x = false;
                break;
            }
        }
        if(x == false){
            guesses++;
            x = true;
        }
        else
            break;
    }

    printf("It took %d attempts to crack this password: %s", guesses, guess);
    return 0;
}
