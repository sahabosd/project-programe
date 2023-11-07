#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
#include"splash.h"


int main(void)
{
    system("color 3F");
    int pin=18457,option,enteredpin,count=0,amount=1;
    float balance=15000;
    int continueTransaction=1;
    time_t now;
    time(&now);
    printf("\t\t\t\t\t     %s",ctime(&now));
    printf("\n\t\t\t====================*welcome to ATM BANKING SYSTEM*====================");
    printf("%s",ctime(&now));
    while(pin!=enteredpin)
    {
        printf("\nplease enter your pin:"),
        scanf("%d",&enteredpin);
        if(enteredpin!=pin)
        {
            Beep(610,500);
            printf("invalid pin!!!");
        }
        count++;
        if(count==4 && pin!=enteredpin)
        {
            exit(0);
        }
    }
    while(continueTransaction !=0)
    {
       printf("\n\t\t\t===================*Available Transactions*===================");
       printf("\n\n\t\t1.withdraw1");
       printf("\n\t\t2.Deposit");
       printf("\n\t\t3.Check Balance");
       printf("\n\n\tplease select the option:");
       scanf("%d",&option);
       switch(option)
       {
       case 1:
        while(amount%500!=0)
        {
            printf("\n\t\tEnter the amount:");
            scanf("%d",&amount);
            if(amount%500!=0)
                printf("\n\t The amount should be multiple of 500");
        }
        if(balance<amount)
        {
            printf("\n\t Sorry insufficient balance");
            amount = 1;
            break;
        }
        else
        {
            balance -=amount;
            printf("\n\t\tYou have withdrawn Rs.%d.Your new balance is %.2f",amount,balance);
            printf("\n\t\t\t===================*Thank you for using ATM BANKING*===================");
            amount=1;
            break;
        }
       case 2:
        printf("\n\t\t please enter the amount:");
        scanf("%d",&amount);
        balance +=amount;
        printf("\n\t\tYou have deposited Rs.%d.Your new balance is %.2f",amount,balance);
        printf("\n\t\t\t=====================*Thank you for using ATM BANKING*=====================");
        amount =1;
        break;
       case 3:
        printf("\n\t\tYour balance is Rs.%.2f",balance);
        printf("\n\t\t\t=====================*Thank you for using ATM BANKING SYSTEM*=====================");
        break;
       default:
        Beep(610,500);
        printf("\n\t\tInvalid Option!!!");
       }
       printf("\n\t\tDo you want to perform another transaction? press 1[yes],0[no]");
       scanf("%d",&continueTransaction);



      }

    return 0;
}
