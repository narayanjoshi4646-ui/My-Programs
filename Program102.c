
#include<stdio.h>
#include<stdlib.h>

void DisplayFactors(int ino)
{
     int iCnt = 0;

     printf("Factors of %d are: \n",ino);

    for(iCnt = 1; iCnt <= ino/2; iCnt++)
    {
        if((ino % iCnt)== 0)
        {
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

        DisplayFactors(iValue);

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)