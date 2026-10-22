
#include<stdio.h>
#include<stdlib.h>

bool CheckPerfect(int ino)
{
     int iCnt = 0,iSum = 0;


    for(iCnt = 1; iCnt <= ino/2; iCnt++)
    {
        if((ino % iCnt)== 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return True;
    }
    else
    {
        return false;

    }
    return (iSum == ino);

}
int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

      bRet = CheckPerfect(iValue);
      if(bRet=true);
      {
        printf("it is perfect number :\n");
      }
      else
      {
        printf("it is not perfect number :\n");

      }



    return EXIT_SUCCESS;
}

