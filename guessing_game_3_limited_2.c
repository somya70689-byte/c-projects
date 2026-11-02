#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int secret, guess;
    int attempt = 0;
    srand(time(0));
    secret = rand()% 100+1;
    while(guess != secret && attempt < 5){
        printf("guess the number 1-100: ");
        scanf("%d",&guess);
        attempt ++;
        if(guess > secret){
            printf("This number is large, think about a small number\n");
        }
        else if(guess < secret){
            printf("This number is small, think about a large number\n");
        }
    }
    if(guess == secret){
        printf("good job! you won! the carrect number is %d and attempt %d\n",secret,attempt);
    }
    else {
        printf("Game over! the correct number %d and can't attempt %d anymore\n",secret,attempt);
    }
    return 0;
}

