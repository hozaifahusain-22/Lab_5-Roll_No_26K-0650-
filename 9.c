#include <stdio.h>

int main() {
    int permissions;

    printf("Enter permissions value (0-31): ");
    scanf("%d", &permissions);

    if (permissions & 16) {                                 
        printf("Full access: admin\n");
    }
    else if ((permissions & 8) && (permissions & 2)) {
        printf("Access: delete and write\n");
    }
    else if ((permissions & 4) && !(permissions & 2)) {   
        printf("Access: execute only\n");
    }
    else if ((permissions & 1) && !(permissions & 2) && !(permissions & 4)) {    
         printf("Access: read-only\n");
    }
    else if (permissions == 0) {                  
         printf("Access denied\n");
    }
    else {
    printf("Access: custom permissions\n");
    }

    printf("Bits detected:");
    if (permissions & 1)  printf(" READ(1)");
    if (permissions & 2)  printf(" WRITE(2)");
    if (permissions & 4)  printf(" EXECUTE(4)");
    if (permissions & 8)  printf(" DELETE(8)");
    if (permissions & 16) printf(" ADMIN(16)");

}