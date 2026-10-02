#include<stdio.h>
#include<math.h>
int main()
{
    int accuracy, confidence_score, dataset_size, role, status;
    float model_score, average;

    printf("Enter Accuracy (0-100):");
    scanf("%d", & accuracy);

    printf("Enter Confidence Score (0-100):");
    scanf("%d", & confidence_score);

    printf("Enter Dataset Size(Number of Sample):");
    scanf("%d", & dataset_size);

    printf("Enter  Role: \n");
    printf("1. Intern \n");
    printf("2. Engineer \n");
    printf("3. Admin \n");
    scanf("%d", & role);

    printf("Enter Status:");
    scanf("%d", & status);

    model_score = (accuracy*0.5) + (confidence_score*0.3) + (fmin(dataset_size /1000, 10)*2);
    
    printf("Model score = %.2f\n", model_score);

    if(status & 8)
    {
        printf("Rejected: Model Deprecated");
    }
    else if(!(status & 1))
    {
        printf("Rejected: Not Trained");
    }
    else if(!(status & 2))
    {
        printf("Rejected: Not Validated");
    }
    else if(!(status & 4))
    {
        printf("Pending: Approval Pending");
    }
    else if((accuracy < 70) || (confidence_score < 60))
    {
        printf("Rejected: Performance Too Low");
    }
    else if(dataset_size < 5000)
    {
        printf("Rejected: Dataset Too Small");
    }
    else if(role == 1)
    {
        printf("Denied: Interns cannot Deploy");
    }
    else if((role == 2) && (model_score < 80))
    {
        printf("Denied: Engineer Needs Higher Score");
    }
    else
    {
        printf("Approved");
    }

    printf("\nSize of variables (in bytes):\n");
    printf("Accuracy      : %d\n", sizeof(accuracy));
    printf("Confidence    : %d\n", sizeof(confidence_score));
    printf("Dataset Size   : %d\n", sizeof(dataset_size));
    printf("Role          : %d\n", sizeof(role));
    printf("Status         : %d\n", sizeof(status));
    printf("Model Score    : %d\n", sizeof(model_score));

    average = (accuracy + confidence_score) / 2.0;
    printf("\nAverage of accuracy and confidence: %.2f\n", average);
 
    if (model_score > average)
        printf("Model score is ABOVE the average of accuracy and confidence.\n");
    else
        printf("Model score is NOT above the average of accuracy and confidence.\n");
}