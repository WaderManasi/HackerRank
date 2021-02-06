/////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;
import java.math.BigInteger;
public class Solution {

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        String one=s.next();
        String two=s.next();

        //converts string input to bigInteger
        BigInteger no1=new BigInteger(one);
        BigInteger no2=new BigInteger(two);
       
        System.out.println(no1.add(no2));
        System.out.println(no1.multiply(no2));
    }
}

/////////////////////////////////////////////////////////////////////////////////////////
