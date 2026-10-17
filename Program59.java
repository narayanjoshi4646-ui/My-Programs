import java.util.Scanner;

class Program59
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


        // Input Updator
        if(ino <= 0)
        {
            ino = -ino;
        }
      
        for(icnt= 1; icnt<= ino; icnt++)
        {   
         System.out.println("Jay Ganesh...");
        }
    }
}