#include <stdio.h>

int main() 
{
    int room, time, motion, light, cooking = 0;
    
    printf("Enter time (0-23): ");
    scanf("%d", &time);
    printf("Motion detected (1/0): ");
    scanf("%d", &motion);
    printf("Enter light level (0-100): ");
    scanf("%d", &light);

    printf("\nSelect room:\n");
    printf("1 = Living Room\n2 = Bedroom\n3 = Kitchen\n");
    printf("Choice: ");
    scanf("%d", &room);

    if (room < 1 || room > 3) {
        printf("Invalid room choice!\n");
        
    }

    if (time < 0 || time > 23 || (motion != 0 && motion != 1) || light < 0 || light > 100) {
        printf("Invalid input!\n");
        
    }

    /* Print room name */
    switch (room) {
        case 1: printf("\nRoom: Living Room\n"); break;
        case 2: printf("\nRoom: Bedroom\n");     break;
        case 3: printf("\nRoom: Kitchen\n");     break;
    }


    if (room == 3) {
        printf("Cooking? (1/0): ");
        scanf("%d", &cooking);
    }

    
    if (motion == 0) {
        printf("Mode: Away\n");
        printf("Action: All devices OFF\n");
    }
    else {  
        if (time >= 6 && time < 18) {
            printf("Mode: Day\n");
            printf("Action: Lights ON\n");
        }
        else if (time >= 18 && time < 23) {
            printf("Mode: Evening\n");
            printf("Action: Lights DIM\n");
        }
        else {  /* time >= 23 or time < 6 */
            printf("Mode: Night\n");
            printf("Action: Lights OFF\n");
        }
    }

    if (room == 3 && cooking == 1) {
        printf("Extra Action: Exhaust fan ON (cooking)\n");
    }

}