def main():
    numInts, divisor = [int(x) for x in input().strip().split()]
    intList = [int(x) for x in input().strip().split()]
    finalList = []
    for i in intList:
        newList = [i]
        for j in intList:
            if j != i:
                addJ = True
                for k in newList:
                    if (j + k) % divisor == 0:
                        addJ = False
                        break
                if addJ:
                    newList.append(j)
        if len(newList) > len(finalList):
            finalList = newList
    print(len(finalList))





main()
