inpt = int(input())
temp = []

for i in range(inpt):
    test = input()
    if test.find('Simon says ')!=-1:
        result = test.split('Simon says ')
        temp.append(result[1])

for i in range(len(temp)):
    print(temp[i])