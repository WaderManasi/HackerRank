/////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = s.substring(0,k);
        String largest = s.substring(0,k);
         String t;

    for(int i = 0 ; i < s.length() - k + 1 ; i++)
    {
        t=s.substring(i, i + k);
        if(smallest.compareTo(t)>0)
            smallest=t;
        if(largest.compareTo(t)<0)
            largest=t;
    }

        return smallest + "\n" + largest;
    }

/////////////////////////////////////////////////////////////////////////////////////
