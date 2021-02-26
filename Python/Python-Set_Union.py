# Enter your code here. Read input from STDIN. Print output to STDOUT
a=int(input())
s1=set(map(int,input().split()))
b=int(input())
s2=set(map(int,input().split()))
print(len(s1.union(s2)))