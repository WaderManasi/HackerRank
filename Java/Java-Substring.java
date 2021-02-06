///////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int start = in.nextInt();
        int end = in.nextInt();
        
        //substring(int beginIndex,int lastIndex) method in java returns the substring from the given string
        System.out.println(S.substring(start,end));
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
