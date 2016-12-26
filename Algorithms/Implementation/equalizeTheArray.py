







def main():
    numInputs = int(input().strip())
    lst = [int(x) for x in input().strip().split()]
    maxCount = 0
    maxElement = 0

    for element in lst:
        tempCount = lst.count(element)
        if tempCount > maxCount:
            maxCount = tempCount
            maxElement = element

    count = 0
    for element in lst:
        if element != maxElement:
            count += 1

    print(count)
    




main()
