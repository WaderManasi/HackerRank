////////////////////////////////////////////////////java solution/////////////////////////
import java.io.*;
import java.util.*;
import java.util.Collections;
import java.util.regex.*;
import java.util.regex.Matcher;
//used for match operations on text using patterns
import java.util.regex.Pattern;
///Used for defining patterns

///////////////////////////////////////////////////////////////////////////////////////////
public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();

        String emailRegEx = ".+@gmail\\.com$";
        Pattern pat = Pattern.compile(emailRegEx);
        //to compile the given regular expression {string provided}

        List<String> lst = new ArrayList();
        for (int i = 0; i < num; i++){
            String name = scanner.next();
            String email = scanner.next();
            Matcher matcher = pat.matcher(email);
            if (matcher.find()){ ///for searching multiple occurences of regex
                lst.add(name);
            }
        }
        Collections.sort(lst);  //sorting list names 
        for (String name : lst){
            System.out.println(name);
        }
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////
