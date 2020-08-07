########################################################################

def count_substring(string, sub_string):
    ct=0;
    i=0
    while(i<len(string)):
        if(string.find(sub_string,i)>=0):
            #find() function return lowest index of start of substring
            i=string.find(sub_string,i)+1
            ct=ct+1
        else:
            break
    return ct

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)

########################################################################
