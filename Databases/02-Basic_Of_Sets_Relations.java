import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int arr[] = {1 ,2,3,4,5,6};
        int brr[] = {2,3,4,5,6,7,8};
        // int arr[] = new int[8];
        // int brr[] = new int[8];
         int ct = 0;
        // for(int i=0;i<7;i++)
        //     arr[i]=s.nextInt();
        // for(int i=0;i<7;i++)
        //     brr[i]=s.nextInt();
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<brr.length;j++)
            {if(arr[i] == brr[j])
                ct++;
            }
        }
        System.out.println(ct);
    }
}
