// Java code to check if a number is
// a hoax number or not.
import java.io.*;
import java.util.*;
 
public class HoaxNumber{
     
    // Function to find distinct
    // prime factors of given
    // number n
    static List<Integer> primeFactors(int n)
    {
        List<Integer> res = new ArrayList<Integer>();
        if (n % 2 == 0)
        {
            while (n % 2 == 0)
                n = n / 2;
            res.add(2);
        }
     
        // n is odd at this point,
        // since it is no longer
        // divisible by 2. So we
        // can test only for the
        // odd numbers, whether they
        // are factors of n
        for (int i = 3; i <= Math.sqrt(n);
                                i = i + 2)
        {
     
            // Check if i is prime factor
            if (n % i == 0)
            {
                while (n % i == 0)
                    n = n / i;
                res.add(i);
            }
        }
     
        // This condition is to
        // handle the case when
        // n is a prime number
        // greater than 2
        if (n > 2)
            res.add(n);
        return res;
    }
     
    // Function to calculate
    // sum of digits of distinct
    // prime factors of given
    // number n and sum of
    // digits of number n and
    // compare the sums obtained
    static boolean isHoax(int n)
    {
         
        // Distinct prime factors
        // of n are being
        // stored in vector pf
        List<Integer> pf = primeFactors(n);
         
        // If n is a prime number,
        // it cannot be a hoax number
        if (pf.get(0) == n)
            return false;
         
        // Finding sum of digits of distinct
        // prime factors of the number n
        int all_pf_sum = 0;
        for (int i = 0; i < pf.size(); i++)
        {
     
            // Finding sum of digits in current
            // prime factor pf[i].
            int pf_sum;
            for (pf_sum = 0; pf.get(i) > 0;
                pf_sum += pf.get(i) % 10,
                   pf.set(i,pf.get(i) / 10));
     
            all_pf_sum += pf_sum;
        }
     
        // Finding sum of digits of number n
        int sum_n;
        for (sum_n = 0; n > 0; sum_n += n % 10,
                                    n /= 10)
            ;
     
        // Comparing the two calculated sums
        return sum_n == all_pf_sum;
    }
     
    // Driver Code
    public static void main(String args[])
    {
        int n = 84;
        if (isHoax(n))
            System.out.print( "A Hoax Number\n");
        else
            System.out.print("Not a Hoax Number\n");
    }
}