#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int secret, guess;
    int try = 0;
    srand(time(0));
    secret = rand() % 100+1;
    do {
        printf("guess the numbe 1-100: ");
        scanf("%d",&guess);
        try = try+1;
        if(guess > secret){
            printf("this number large think abount a small number\n");
        }
        else if(guess < secret){
            printf("this number small think abount a large number\n");
        }
    }  while(guess != secret && try <= 7);
     if(guess == secret){
        printf("well done you win! the corract number %d and try %d\n",secret,try);
     }
     else {
        printf("game over the corract number %d and you can't try anymore %d\n",secret,try);
     }
     return 0;
    }
