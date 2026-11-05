#include <stdio.h>
int sum(int a, int b){ return a+b; }
int diffrence(int a, int b){ return a-b; }
int product(int a, int b){ return a*b; }
float divide(int a, int b){ return(float)a/b;  }
int main(){
    int num1, num2, choice;
    int intresult;
    float floatresult;
    char again;
    do{
        printf("\n================= MY CALCULATOR ====================");
        printf("\n1. sum\n2. diffrence\n3. product\n4. divide\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
        printf("enter two number: ");
        scanf("%d %d", &num1, &num2);
        if(choice == 1){
            intresult = sum(num1, num2);
            printf("sum = %d\n", intresult);
        }
        else if(choice == 2){
            intresult = diffrence(num1, num2);
            printf("diffrence = %d\n", intresult);
        }
        else if(choice == 3){
            intresult = product(num1, num2);
            printf("product = %d\n", intresult);
        }
        else if(choice == 4){
            floatresult = divide(num1, num2);
            printf("divide = %.2f\n");
        }
        else{
            printf("wrong choice\n");
        }
        printf("would you like to do more h/n? ");
        scanf(" %c", &again);
    } while(again == 'h' || again == 'H');
    printf("thank you bye bye\n");
    return 0;
}