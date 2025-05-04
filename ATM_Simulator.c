/* 6.Mini ATM Simulator using structures.  
> - Store account number, balance, name.  
> - Allow deposits, withdrawals, balance checking.
Developed By Amina Hasanaath*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    struct ATM{
        char name[50];
        float balance;
        int acc_number;
        struct ATM *next;

    };
    void deposit(struct ATM *User){
        printf("\nBalance:\t%0.2f",User->balance);
        float amount_D;
        printf("\n\nEnter the amount to deposit :");
        scanf("%f",&amount_D);

        User->balance += amount_D;
        printf("Updated Balance: %0.2f",User->balance);
        printf("\n");


        }

        void withdrawals(struct ATM *User){
            printf("\nBalance:\t%0.2f",User->balance);
            float amount_Withdrawal;
            printf("\n\nEnter the amount to Withdraw :");
            scanf("%f",&amount_Withdrawal);
            User->balance -= amount_Withdrawal;
        printf("Updated Balance: %0.2f",User->balance);
                printf("\n");
        }
        void Balance_Checking(struct ATM *User){
            printf("\nFinal Details:\n");
            printf("\nUsername:\t%s",User->name);
            printf("\nAccount Number:\t%d",User->acc_number);
            printf("\nYour current Balance:\t%0.2f",User->balance);
            printf("\n");

        }

 int main(){
    struct ATM *User;
        User = (struct ATM *)malloc(sizeof(struct ATM)); 
        char Username[50];
        printf("Username : \t");
        fgets(Username,sizeof(Username),stdin);
        Username[strcspn(Username, "\n")] = 0;
        strcpy(User->name,Username);
        printf("Balance : \t");
        scanf("%f",&User->balance);
        printf("Account Number: ");
        scanf("%d",&User->acc_number);

              deposit(User);
              withdrawals(User);
              Balance_Checking(User);


            return 0;



    }
