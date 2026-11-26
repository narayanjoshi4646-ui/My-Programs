
#include<stdio.h>
#include<stdlib.h>

int CountSmallX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmallX(Arr);

    printf("frequncy of small latters : %d\n",iRet);

     return EXIT_SUCCESS;
}