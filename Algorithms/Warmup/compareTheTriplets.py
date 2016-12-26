

def main():
    aliceInput = [int(x) for x in input().strip().split(" ")]
    bobInput = [int(x) for x in input().strip().split(" ")]

    alicePoints = 0
    bobPoints = 0
    for i in range(3):
        if aliceInput[i] > bobInput[i]:
            alicePoints += 1
        elif bobInput[i] > aliceInput[i]:
            bobPoints  += 1
    print (alicePoints, bobPoints)


main()
