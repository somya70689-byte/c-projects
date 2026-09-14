#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
   int secret,guess;
   srand(time(0));
    secret = rand() % 100+1;
    do {
        printf("guess the number 1-100: ");
        scanf("%d",&guess);
        if(guess > secret){
            printf("This number large think about a small number\n");
        }
        else if(guess < secret){
            printf("This number small think about a large number\n");
        }
    }  while (guess != secret);
    printf("Well done you win! the correct number is %d\n",secret);
    return 0;
}