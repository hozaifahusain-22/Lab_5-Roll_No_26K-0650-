#include<stdio.h>
int main()
{
    int card_status, pin, account_balance, withdraw, note_2000, note_500, note_100, remaining;

    printf("Enter Card Status: (1=Valid, 0=Blocked) \n");
    scanf("%d", & card_status);

    if(card_status==0)
    {
        printf("Your Card Is Blocked. Please Contact Bank");
    }
    else
    {
        printf("Enter PIN: (1=correct, 0=wrong) \n");
        scanf("%d", & pin);

        if(pin==0)
        {
            printf("Invalid PIN.");
        }
        else
        {
            printf("Enter Account Balance: \n");
            scanf("%d", & account_balance);

            printf("Enter Withdrawal Amount: \n");
            scanf("%d", & withdraw);

            if(withdraw <= 0)
            {
                printf("Invalid Amount");
            }
            else if(withdraw > account_balance)
            {
              printf("Insufficient Balance");  
            }
            else if(withdraw > 25000)
            {
                printf("Daily Limit Exceeded");
            }
            else if((account_balance - withdraw) < 1000 )
            {
                printf("Minimum Balance Must be Maintained");
            }
            else
            {
                account_balance = account_balance - withdraw;
                note_2000 = withdraw / 2000;
                remaining= withdraw % 2000;
                note_500 = remaining / 500;
                remaining= withdraw % 500;
                note_100 = remaining / 100;

                printf("Updated balance: %d\n", account_balance);
                printf("2000 notes: %d\n", note_2000);
                printf("500 notes: %d\n", note_500);
                printf("100 notes: %d\n", note_100);
                printf("Please collect your cash.\n");
            }
        }
    }
}