





def main():
    numInts, divisor = [int(x) for x in input().strip().split()]
    intList = [int(x) for x in input().strip().split()]
    remainders = {x:[] for x in range(divisor)}
    subsetSize = 0
    for num in intList:
        remainders[num % divisor].append(num)
    if(len(remainders[0]) > 0):
        subsetSize += 1
    for i in range(1, divisor//2 + 1):
        maxIndex = None
        if len(remainders[i]) > len(remainders[divisor-i]):
            maxIndex = i
        else:
            maxIndex = divisor - i
        if i == divisor - i and len(remainders[i]) > 0:
            subsetSize += 1
        else:
            subsetSize += max(len(remainders[i]),len(remainders[divisor-i]))
    print(subsetSize)

         




main()
