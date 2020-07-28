#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Version 2 implements dictionary attack and checks against a list of commonly used passwords.

int main() {
    char password[50] = "";
    char guess[50] = "";
    int guesses = 0;
    bool x = true, isSame = true;

    FILE * fPointer;
    fPointer = fopen("Passwords.txt", "r");
    char line[50] = "";

    puts("Enter an alphanumeric password that is less than 50 characters long.");
    gets(password);

    int length = 0;
    for(length; password[length] != '\0'; length++){

    }

    while(!feof(fPointer)){
        fgets(line, 50, fPointer);
        for(int i = 0; i < length; i++){
            if(password[i] != line[i]){
                isSame = false;
                break;
            }
        }

        if(isSame){
            printf("It took 1 attempt to crack your simple password: %s", password);
            fclose(fPointer);
            return 0;
        }
        isSame = true;
    }

    fclose(fPointer);

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
