#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand()%100 +1;// Genrate a random number between 1 and 100
    do{
        printf("Enter a number between 1 and 100:");
        scanf("%d", &guess);
        if(guess<number){
            printf("Higher number please!\n");
        }
        else if(guess>number){
            printf("Lower number please!\n");
        }
        else{
            printf("Aaaa meri jaan ladke!!! Just %d attemps", nguess);
        }
        nguess++;
    }while(guess!=number);
    return 0;
}
