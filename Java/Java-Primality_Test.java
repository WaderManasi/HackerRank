/////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        BigInteger num=scanner.nextBigInteger();
        scanner.close();
        
        //isProbabalePrime(Int certainty) method in BigInteger Class return true or false if number is prime or not
        if(num.isProbablePrime(100))
            System.out.println("prime");
        else
            System.out.println("not prime");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////
