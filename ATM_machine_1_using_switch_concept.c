#include <stdio.h>
int main(){
    int balance = 5000;
    int amount;
    int choice;
    while(choice != 4){
        printf("\n================== ATM MACHINE =====================");
        printf("\n1. balance check");
        printf("\n2. to withdraw money");
        printf("\n3. to deposit money");
        printf("\n4. exit\n");
        printf("enter your choice: ");\
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("your balance = %d\n", balance);
            break;
            case 2:
            printf("How much money do you need to withdraw? ");
            scanf("%d", &amount);
            if(amount <= balance){
            balance = balance - amount;
            printf("the money has been withdrawn\n", amount);
            printf("remaining money = %d\n", balance);
            }
            else{
                printf("error: balance is low\n");
            }
            break;
            case 3:
            printf("How much money do you need deposit? ");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("the money has been deposited: %d\n", amount);
            printf("new balance = %d\n", balance);
            break;
            case 4:
            printf("thank you byee\n");
            break;
            default:
            printf("wrong choice\n");
        }
    }
        return 0;
    }