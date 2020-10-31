import java.util.*;
import java.io.*;
import java.lang.*;
class sarvesh
{
    public static void main(String[] args)
    {
         Scanner s=new Scanner(System.in);
         String[] input=s.nextLine().split(" ");
         for(int index=input.length-1;index>=0;index--)
         {
             System.out.print(input[index]+" ");
         }
    }
  }
