#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name :\n");
    scanf("%[^'\n']s",sName);   // Enter remains in the input buffer

    fflush(stdin);  // Clear the input buffer to remove the leftover newline character

    printf("Enter your age :\n");
    scanf("%d",&iAge);
    
    printf("Enter your marks :\n");
    scanf("%f",&fMarks);

    printf("welcome %s\n",sName);
    printf("Your age is : %d\n",iAge);
    printf("your marks : %f\n",fMarks);
    

    return  EXIT_SUCCESS;
}