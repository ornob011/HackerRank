import java.util.Scanner;

public class Array_Manipulation
{
    private static long getMax(long[] inputArray)
    {
        long max=Long.MIN_VALUE;

        long sum=0;

        for(int i=0; i<inputArray.length; i++)
        {
            sum=sum+inputArray[i];
            max=Math.max(max, sum);
        }
        return max;
    }

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();

        long outputArray[]=new long[n+2];

        for(int i=0; i<m; i++)
        {
            int a=sc.nextInt();
            int b=sc.nextInt();
            int k=sc.nextInt();

            outputArray[a]=outputArray[a]+k;
            outputArray[b+1]=outputArray[b+1]-k;
        }
        long max=getMax(outputArray);

        System.out.println(max);

        sc.close();
    }
}

