
#include<stdio.h>
#include<stdlib.h>

int SumFactors(int ino)
{
     int iCnt = 0,iSum = 0;


    for(iCnt = 1; iCnt <= ino/2; iCnt++)
    {
        if((ino % iCnt)== 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;

}
int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

         iRet = SumFactors(iValue);



    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)