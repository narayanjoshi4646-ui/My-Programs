import java.util.Scanner;

class Program66
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;
        Iteration iteration = new Iteration();
       
       System.out.println("Enter the frequency :");
       iValue = scanner.nextInt();

        iteration.Display(iValue);
    }

}
class Iteration
{
    public void Display(int ino)
     {
        int icnt = 0;

         icnt = 1;
         while ( icnt<=ino)
             
        {   
         System.out.println("-------------");
         System.out.println(icnt + " Jay Ganesh...");
         
         System.out.println("-------------");
        icnt++;
        }
    }
}    