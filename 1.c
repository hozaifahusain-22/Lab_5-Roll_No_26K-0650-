#include<stdio.h>
int main()
{
int type, hours, membership;
float fee;

printf("Enter Veicle Type: ");
printf("1. Bike ");
printf("2. Car ");
printf("3. Truck ");
scanf("%d", & type);

if(type <=0 || type>3)
{
 printf("Invalid Veicle Type! ");
}
else
{
    printf("Enter hours: ");
    scanf("%d", & hours);

    if(hours <= 0)
    {
     printf("Invalid Parking Duration! ");
    }
    else
    {
        if(type==1)
     {
     fee=20*hours;
     }
     else if(type==2)
     {
       if(hours<=2)
       {
        fee=50;
       }
       else 
       {
        fee=50 + 30*(hours - 2);
       }
     }
     else
     {
      if(hours<=3)
      {
       fee=100;
      }
      else 
      {
       fee=100 + 30*(hours - 3);
      }
     }
    }
}

printf("Enter Membership Status: ");
scanf("%d", & membership);

if(membership != 0 && membership != 1)
{
    printf("Invalid Membership status");
}

else if(membership==1)
{
    fee=fee-(fee*0.15);
    printf("Membership Discount Applied");
}
else
{
    printf("No Membership Discount Applied \n");
}

printf("\nYour Parking Fee is Rs: %.2f", fee);
}