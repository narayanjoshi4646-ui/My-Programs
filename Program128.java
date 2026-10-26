// additon of its digit

import java.util.Scanner;

class Digit
{
    public int void SumDigits(int ino)
    {
      iDigit = 0;
      int iSum = 0;
    
        while(ino ! = 0)
        {
            iDigit = ino % 10;

            iSum = iSum +iDigit;

            ino = ino /10;                 

        }
        return iSum;
    }
}

class Program128
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iRet = 0;
       Digit digit = new Digit();

       system.out.println("Enter number :");
       int iValue = scanner.nextint();
       
        iRet = digit.SumDigits(iValue);

       system.out.println(" summation of Digit : ",+iRet);

    }
}