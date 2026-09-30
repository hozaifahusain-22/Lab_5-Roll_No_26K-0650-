#include<stdio.h>
int main()
{
    int category, subtype, delayed;

    printf("Enter Category: ");
    printf("1. Greeting ");
    printf("2. Query ");
    printf("3. Complaint ");
    printf("4. Feedback ");
    scanf("%d", & category);

    switch(category)
    {
      case 1: 
        printf("Choose sub-type: ");
        printf("1. Morning ");
        printf("2. Evening ");
        scanf("%d", & subtype);

        switch (subtype)
        {
        case 1:
            printf("Bot: Good morning! How can I help you today? \n");
            break;
        case 2:
            printf("Bot: Good evening! How can I help you? \n");
            break;
        default:
            printf("Invalid selection \n");
        }
        break;
      case 2:
        printf("Choose sub-type: ");
        printf("1. Product ");
        printf("2. Billing ");
        printf("3. Technical ");
        scanf("%d", &subtype);

        switch (subtype)
        {
        case 1:
            printf("Bot: Please tell us which product you are asking about.\n");
            break;
        case 2:
            printf("Bot: Connecting you to our billing team for your query.\n");
            break;
        case 3:
            printf("Bot: Our technical support team will assist you shortly.\n");
            break;
        default:
            printf("Invalid selection\n");
        }
        break;
      
      case 3:
        printf("Choose sub-type: ");
        printf("1. Delivery ");
        printf("2. Quality ");
        scanf("%d", &subtype);
        switch (subtype)
        {
        case 1:
            printf("Is your order delayed? ");
            scanf("%d", &delayed);
            if (delayed == 1)
                printf("Bot: We sincerely apologize for the delay. We are expediting your order.\n");
            else if (delayed == 0)
                printf("Bot: We apologize for the delivery issue. Please share your order details so we can look into it.\n");
            else
                printf("Invalid selection\n");
            break;
        case 2:
            printf("Bot: We are sorry about the quality. We will arrange a replacement or refund.\n");
            break;
        default:
            printf("Invalid selection\n");
        }
        break;

      case 4: 
        printf("Choose sub-type: ");
        printf("1. Positive");
        printf("2. Negative");
        scanf("%d", &subtype);
        switch (subtype)
        {
        case 1:
            printf("Bot: Thank you for your kind feedback!\n");
            break;
        case 2:
            printf("Bot: Thank you for telling us. We will work on improving.\n");
            break;
        default:
            printf("Invalid selection\n");
        }
        break;

      default:
        printf("Invalid selection\n");

    }
}