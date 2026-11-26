
#include<stdio.h>
#include<stdlib.h>

int CountCapitalX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapitalX(Arr);

    printf("frequncy of Capital latters : %d\n",iRet);

     return EXIT_SUCCESS;
}