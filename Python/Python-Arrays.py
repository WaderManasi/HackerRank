#

import numpy
def arrays(arr):
    a = numpy.array(arr)
    b = a[::-1]
    return numpy.array(b,float)

arr = input().strip().split(' ')
result = arrays(arr)
print(result)