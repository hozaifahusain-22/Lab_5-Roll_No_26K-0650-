#include <stdio.h>

int main() {
    int stream, interest, medicine;

    printf("Select stream (1 = Science, 2 = Commerce, 3 = Arts): ");
    scanf("%d", &stream);

    switch (stream) {
        case 1:
          printf("Select interest (1 = Biology, 2 = Physics, 3 = Chemistry): ");
          scanf("%d", &interest);
          switch (interest) {
             case 1:
                 printf("Interested in medicine? (1 = Yes, 0 = No): ");
                 scanf("%d", &medicine);
                 if (medicine == 1)
                     printf("Recommended course: MBBS\n");
                 else if (medicine == 0)
                     printf("Recommended course: Biotechnology\n");
                 else
                    printf("Invalid choice\n");
                 break;
             case 2:
                printf("Recommended course: Physics\n");
                  break;
            case 3:
                 printf("Recommended course: Chemistry\n");
                  break;
              default:
                    printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("Select interest (1 = Accounting, 2 = Marketing): ");
            scanf("%d", &interest);
            switch (interest) {
                case 1:
                    printf("Recommended course: Accounting\n");
                    break;
                case 2:
                    printf("Recommended course: Marketing\n");
                    break;
                default:
                    printf("Invalid choice\n");
            }
            break;

        case 3:
            printf("Select interest (1 = Literature, 2 = History, 3 = Psychology): ");
            scanf("%d", &interest);
            switch (interest) {
                case 1:
                    printf("Recommended course: Literature\n");
                    break;
                case 2:
                    printf("Recommended course: History\n");
                    break;
                case 3:
                    printf("Recommended course: Psychology\n");
                    break;
                default:
                    printf("Invalid choice\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

}