

def main():
    
    firstLine = [int(x) for x in input().strip().split(" ")]
    secondLine = [int(x) for x in input().strip().split(" ")]
    thirdLine = [int(x) for x in input().strip().split(" ")]

    houseLeft = firstLine[0]
    houseRight = firstLine[1]
    appleTree = secondLine[0]
    orangeTree = secondLine[1]

    numApples = 0
    numOranges = 0

    for elem in input().strip().split(" "):
        dist = int(elem)
        newPosition = appleTree + dist
        if newPosition >= houseLeft and newPosition <= houseRight:
            numApples += 1

    for elem in input().strip().split(" "):
        dist = int(elem)
        newPosition = orangeTree + dist
        if newPosition >= houseLeft and newPosition <= houseRight:
            numOranges += 1


    print ("%s\n%s" %(numApples, numOranges))
main()
