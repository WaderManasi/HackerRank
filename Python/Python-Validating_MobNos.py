# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
n = int(input())
for i in range (0,n):
    if(re.match(r"^[7|8|9]\d{9}$",input())):
        print("YES")
    else:
        print("NO")
    
