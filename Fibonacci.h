/*
 * O(N) Fibonacci 
*/

public class Fibonacci{

    public static long F(int N){
        if (N == 0) return 0;
        if (N == 1) return 1;

        long[] f = new long[N+1];
        f[0] = 0;
        f[1] = 1;

        for (int i = 2; i <= N; i++)
        {
            f[i] = f[i-1] + f[i-2];
        }
        return f[N];
    }

    public static void main(String[] args)
    {
        for (int N = 0; N < 100; N++)
            StdOut.println(N + " " + F(N));
    }
}


/*
 * O(2^N) Fibonacci 
*/

public class Fibonacci
{
   public static long F(int N)
   {
      if (N == 0) return 0;
      if (N == 1) return 1;
      return F(N-1) + F(N-2);
   }
 public static void main(String[] args)
   {
      for (int N = 0; N < 100; N++)
         StdOut.println(N + " " + F(N));
   }
}
