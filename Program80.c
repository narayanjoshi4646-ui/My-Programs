 // Input : 10
 // 1   3   5   7   9

#include<stdio.h>

#include<stdlib.h>

int Summation(int ino)

{
    int icnt = 0;
    int isum = 0;
    
    for (icnt = 1; icnt <= ino; icnt++)  
    {
    printf("%d\t",icnt);
    isum += icnt;
    }
    return isum;
    printf("\n");

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Frequnce:\n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    iRet = Summation(iValue);
    printf("Summation is: %d\n", iRet);

     return EXIT_SUCCESS;
}