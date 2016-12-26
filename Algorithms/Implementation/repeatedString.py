import math


def main():
    smallString = input().strip()
    stringLength = int(input().strip())
    numPatterns = stringLength / len(smallString)
    numAs = (math.floor(numPatterns) * smallString.count('a'))
    
    leftOvers = stringLength % len(smallString) #Look at leftover chars
    for i in range(leftOvers):
        if smallString[i] == 'a':
            numAs += 1

    print(numAs)

main()
