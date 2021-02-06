#####################################################################################

if __name__ == '__main__':
    string = input()
    s=len(string)
#####################################################
    for a in string:
        ct1=0
        if(a.isalnum()):
            ct1=ct1+1
            break
    if(ct1!=0):
        print("True")
    else:
        print("False")
#####################################################
    for b in string:
        ct2=0
        if(b.isalpha()):
            if(b.islower() or b.isupper()):
                ct2=ct2+1
                break
    if(ct2!=0):
        print("True")
    else:
        print("False")
#####################################################
    for c in string:
        ct3=0
        if(c.isdigit()):
            ct3=ct3+1
            break
    if(ct3!=0):
        print("True")
    else:
        print("False")
#####################################################
    for i in string:
        ct4=0
        if(i.islower()):
            ct4=ct4+1
            break
    if(ct4!=0):
        print("True")
    else:
        print("False")
#####################################################
    for j in string:
        ct5=0
        if(j.isupper()):
            ct5=ct5+1
            break
    if(ct5>0):
        print("True")
    else:
        print("False")
#####################################################

#####################################################################################
