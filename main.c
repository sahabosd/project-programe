#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>

int main()
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
       printf("\n\t\t\t===================*Available Transactions*===================");
       printf("\n\n\t\t1.withdraw1");
       printf("\n\t\t2.Deposit");
       printf("\n\t\t3.Check Balance");



    return 0;
}
