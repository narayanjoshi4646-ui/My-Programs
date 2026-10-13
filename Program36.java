// Approach 3
import java.util.Scanner;

class Arithematic
{
    public static int Addition(int iNo1,int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}


class Program36

{
    public static void main(String A [])
    {
        
        Scanner scanner = null;
        int iValue1 = 0,iValue2 = 0, iResult = 0;       

         scanner = new Scanner(System.in);
          
            System.out.println("Enter first number :");
            iValue1 = scanner.nextInt();

            System.out.println("Enter second number :");
            iValue2 = scanner.nextInt();

            iResult = Addition (iValue1,iValue2);   // This line will cause a compilation error because Addition is not defined in Program36. It should be called from the Arithematic class.
            

            System.out.println("Addition is :"+iResult);           

        

    }
}