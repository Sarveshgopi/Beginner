/*            ALGORITHM OF FINDING THE NUMBER OF DIGITS IN AN INTEGER
                 
                 Take the upper bound of log of the given number + 1
                                                                                  */
import java.util.*;
class sarvesh
{
      public static void main(String[] args)
      {
            // START OF THE SCRIPT
            Scanner s=new Scanner(System.in);
            int n=s.nextInt();
            int d=Math.floor(Math.log(n)+1);
            System.out.print(d);
       }
       // END OF THE SCRIPT
}
