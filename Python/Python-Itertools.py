# solution
from itertools import product
A=list(map(int,input().split()))
B=list(map(int,input().split()))
print(*product(A,B))

# *[1,2,3]: unpaqcking the array -> 1 2 3