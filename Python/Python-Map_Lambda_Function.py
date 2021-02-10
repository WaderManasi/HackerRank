cube = lambda x:x*x*x
def fibonacci(n):
    new_list = [0,1]
    for i in range(2,n): #2 indicates that start from 2
        new_list.append(new_list[i-2] + new_list[i-1])
    return(new_list[0:n])

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))