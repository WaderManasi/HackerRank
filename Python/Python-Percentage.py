t=int(input())
d={} #dictionary
for _ in range(t):
    line=input().split()
    name=line[0]
    marks=line[1:]
    marks=list(map(float,marks))
    d[name]=marks   #key-value
required_name=input()
required_marks=d[required_name];
avg = sum(required_marks)/len(required_marks)
print("{0:.2f}".format(sum(required_marks)/(len(required_marks))))
