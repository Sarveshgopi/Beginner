import java.util.*;
class sarvesh
{
   public static void main(String args[])
   {
       Scanner s=new Scanner(System.in);
       int m=s.nextInt(),n=s.nextInt(),i,j;
       int a[][]=new int[1000][1000];
       int b[][]=new int[1000][1000];
       for(i=0;i<m;i++)
       {
         for(j=0;j<n;j++)
         {
             a[i][j]=s.nextInt();
         }
      }
      for(i=0;i<m;i++)
      {
         for(j=0;j<n;j++)
         {
            b[i][j]=s.nextInt();
         }
     }
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            System.out.printf("%d ",a[i][j]+b[i][j]);
        }
        System.out.print("\n");
     }
    }
 }
