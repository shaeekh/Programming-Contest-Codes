import java.util.*;
import java.math.*;
public class Main
{
    public static void main(String args[])
    {


        Scanner sc=new Scanner(System.in);
        while(sc.hasNext())
        {
            int n=sc.nextInt();
            int d=sc.nextInt();
            if(n==0 && d==0)
                break;

            BigInteger N=new BigInteger(String.valueOf(n));

            System.out.println(N.pow(d));
        }
    }
}

