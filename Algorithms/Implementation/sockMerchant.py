


def main():
    numSocks = int(input().strip())
    sockColors = [int(x) for x in input().strip().split()]
    numPairs = 0
    for i in range(len(sockColors)):
        for j in range(len(sockColors)):
            iSock = sockColors[i]
            jSock = sockColors[j]
            if iSock == jSock and i != j and iSock != -1:
                numPairs += 1
                sockColors[i] = -1
                sockColors[j] = -1
    print(numPairs)

    


main()

    
