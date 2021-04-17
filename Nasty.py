def solve():
    n = input()
    for i in range(int(n)):
        x,y,z = input().split()
        x= int(x)
        y= int(y)
        z= int(z)
        noads = (x+z)
        if noads < y:
            print("advertise")
        if noads == y:
            print("does not matter")
        if noads > y:
            print("do not advertise")
        
solve()