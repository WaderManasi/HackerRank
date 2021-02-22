# Enter your code here. Read input from STDIN. Print output to STDOUT
t=int(input())
while(t>0):
    #x,y=map(int,input().split())
    #for i in range(int(input())):  
    try:
        a,b= map(int,input().split())
        print(a//b)
    except Exception as e:
        print("Error Code:",e)
    t-=1
    
