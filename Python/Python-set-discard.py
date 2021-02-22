n = int(input())
s = set(map(int, input().split()))
test = int(input())
while(test>0):
    inp = input().split()
    if(inp[0] == "remove"):
        s.remove(int(inp[1]))
    elif(inp[0] == "discard"):
        s.discard(int(inp[1]))
    elif(inp[0] == "pop"):
        s.pop()
    test-=1
        
print(sum(s))