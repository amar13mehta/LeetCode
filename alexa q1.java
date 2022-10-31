//Add 2 if the number is odd or subtract 2 if the number is even C times
// complexity = 7
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int A = s.nextInt();
         int[] ar1 = new int[A];
         int B;
        int res =0;
         for( int t=0;t<A;t++)
         {
               B = s.nextInt();
               ar1[t]=B;
         }
        int C = s.nextInt();
        int[] ar2 = new int[A];
        for(int q=0;q<A;q++)
        {
            if(ar1[q]%2==0)
            {
                res=ar1[q]-(2*C);
                ar2[q]=res;
            }
            else
            {
                res = ar1[q]+(2*C);
                ar2[q]=res;
            }
        }
        for(int z=0;z<C;z++)
        {
            System.out.print(ar2[z]+" ");
        }
    }
}