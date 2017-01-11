
#check if all elements in aList are factors of num
def aCheck(aList, num):
    for i in aList:
        if num % i != 0:
            return False
    return True

#check if x is a factor of all elements in bList
def bCheck(bList, num):
    for i in bList:
        if i % num != 0:
            return False
    return True

def main():
    numA, numB = [int(x) for x in input().strip().split()]
    aList = [int(x) for x in input().strip().split()]
    bList = [int(x) for x in input().strip().split()]
    minNum = max(aList)
    maxNum = min(bList)

    count = 0
    for i in range(minNum,maxNum+1):
        if aCheck(aList, i) and bCheck(bList, i):
            count += 1 
    print(count)





if __name__ == '__main__':
    main()



