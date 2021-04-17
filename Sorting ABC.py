def solve():
    answer = []
    num = input().split()
    order = input().upper()
    for i in range(len(num)):
        num[i] = int(num[i])
    num.sort()
    temp = {'A':num[0],'B':num[1],'C':num[2]}
    for i in order:
        answer.append(str(temp.get(i)))
    print(answer[0],answer[1],answer[2])

solve()