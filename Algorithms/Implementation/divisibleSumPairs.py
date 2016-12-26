

def main():
#    inputFile = open("test.txt", "r")
    
    n, k = [int(x) for x in input().strip().split(" ")]
    numList = [int(x) for x in input().strip().split(" ")]
#    n, k = [int(x) for x in inputFile.readline().strip().split(' ')]
#    numList = [int(x) for x in inputFile.readline().strip().split(' ')]
    numPairs = 0
    for i, iVal in enumerate(numList):
        for j, jVal in enumerate(numList):
            if i < j and ((iVal + jVal) % k == 0):
                numPairs += 1

    print(numPairs)


main()
