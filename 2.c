#include<stdio.h>
int main()
{
    int marks,attendance,income;

    printf("Enter Marks:");
    scanf("%d", & marks);

    if(marks<50)
    {
        printf("Not Eligible!");
    }
    else
    {
        printf("Enter attendance:");
        scanf("%d", & attendance);

        if(attendance < 75)
        {
            printf("Not Eligible!");
        }
        else
        {
            printf("Enter Family Income:");
            scanf("%d", & income);

            if(income>800000)
            {
                printf("Not Eligible!");
            }
            else
            {
                if(marks>=90 && attendance>=90)
                {
                    printf("Full Scholarship");
                }
                else if(marks>=75 && attendance>=85)
                {
                    printf("Half Scholarship");
                }
                else
                {
                    printf("Quarter Scholarship");
                }
            }
        }
    }
}