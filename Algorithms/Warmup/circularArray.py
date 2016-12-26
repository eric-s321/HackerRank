import time



def rightRotate(myList, n):
    newList = [None] * len(myList)
    for i, num in enumerate(myList):
        newList[(i + n) % len(myList)] = num 
    return newList

#def test():
#    inputFile = open ('testInput7_circularArray.txt','r')
#
#    firstLine = [int(x) for x in inputFile.readline().strip().split(" ")]
#    n = firstLine[0]
#    k = firstLine[1]
#    q = firstLine[2]
#
#    numArray = [int(x) for x in inputFile.readline().strip().split(" ")]
#
#    startTime = time.time()
##    for i in range(k):
##        numArray = rightRotate(numArray)
#    numArray = rightRotate(numArray, k)
#    for i in range(q):
#        print(numArray[int(inputFile.readline())])
#    inputFile.close()
#
#    print("Program took %s seconds " % (time.time() - startTime))




def main():
    firstLine = [int(x) for x in  input().strip().split(" ")]
    n = firstLine[0]
    k = firstLine[1]
    q = firstLine[2]

    numArray =  [int(x) for x in  input().strip().split(" ")]

#    for i in range(k):
#        numArray = rightRotate(numArray)
    numArray = rightRotate(numArray, k)
    for i in range(q):
        print(numArray[int(input().strip())])
#    test()


main()
    


