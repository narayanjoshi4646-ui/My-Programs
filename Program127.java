// count of digit

import java.util.Scanner;

class Digit
{
    public int void CountDigits(int ino)
    {
      iDigit = 0;
      int Count = 0;
    
        while(ino ! = 0)
        {                 
            iCount++;
        }
        return iCount;
    }
}

class Program127
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iRet = 0;
       Digit digit = new Digit();

       system.out.println("Enter number :");
       int iValue = scanner.nextint();
       
        iRet = digit.CountDigits(iValue);

       system.out.println(" number of digit : ",+iRet);

    }
}