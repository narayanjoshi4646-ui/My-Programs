
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 bool CheckPrime(int ino)
 {
    int iCnt =0;
    bool bFlag = false;
    

    for(iCnt = 2, bFlag = true; iCnt<= ino/2; iCnt++)
    {
        if((ino % iCnt)==0)
        {
            bFlag = false;
        }
    }
     return bFlag;
 }
int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

     bRet = CheckPrime(iValue);

     if(bRet)
    {
    printf("it is prime number :\n");

    }
    else
    {
    printf("it is not a  prime number :\n");

    }

    return EXIT_SUCCESS;
}