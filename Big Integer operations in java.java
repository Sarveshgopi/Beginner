import java.util.*;
class sarvesh
{
   public static void main(String[] args)
   {
        Scanner s=new Scanner(System.in);
        String a=s.next();
        String b=s.next();
        BigInteger x=new BigInteger(a);
        BigInteger y=new BigInteger(b);
        BigInteger d=x.add(y);
        BigInteger e=x.subtract(y);
        BigInteger f=x.multiply(y);
        BigInteger g=x.divide(y);
        BigInteger h=x.remainder(y);
        System.out.println(d);
        System.out.println(e);
        System.out.println(f);
        System.out.println(g);
        System.out.println(h);
    }
}
