import math

def solve():
    x,y = map(int,input().split())
    sin  = math.sin(math.radians(int(y)))
    output = int(x)/sin
    print(math.ceil(output))

solve()