for i in range(int(input())):
    output = 0
    x = int(input())
    for j in range(x):
        candies = int(input())
        output+= candies
        print(output)
    remainder = output % x
    if remainder == int(1):
        print("NO")
    else:
        print("YES")