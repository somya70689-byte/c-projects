#include <stdio.h>
int main (){
    int num1,num2,choice;
    while(choice != 5){
        printf("\n1.add 2.subtact 3.product 4.divide 5.exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        if(choice == 1){
            printf("enter 2 number: ");
            scanf("%d %d",&num1,&num2);
            printf("add = %d\n",num1+num2);
        }
        else if(choice == 2){
            printf("enter 2 number: ");
            scanf("%d %d",&num1,&num2);
            printf("subtact = %d\n",num1-num2);
        }
        else if(choice == 3){
            printf("enter 2 number: ");
            scanf("%d %d",&num1,&num2);
            printf("product = %d\n",num1*num2);
        }
        else if(choice == 4){
            printf("enter 2 number: ");
            scanf("%d %d",&num1,&num2);
            printf("divide = %d\n",num1/num2);
        }
        else if(choice == 5){
            printf("thank you bye bye\n");
        }
    }
    return 0;
}
