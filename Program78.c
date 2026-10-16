 // Input : 10
 // 1   3   5   7   9

#include<stdio.h>

#include<stdlib.h>

void Display(int ino)
{
    int icnt = 0;
    // icnt -> icnt = icnt +1;
    for (icnt = 1; icnt <= ino; icnt+= 2)  
    {
    printf("%d\t",icnt);

    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequnce:\n");
    scanf("%d",&iValue);

    Display(iValue);

     return EXIT_SUCCESS;
}