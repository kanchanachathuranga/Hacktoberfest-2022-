// A simple recursive program to find n-th
// leonardo number.
import java.io.*;
 
class GFG {
    static int leonardo(int n)
    {
        if (n == 0 || n == 1)
            return 1;
        return (leonardo(n - 1) + leonardo(n - 2) + 1);
    }
 
    public static void main(String args[])
    {
        System.out.println(leonardo(3));
    }
}