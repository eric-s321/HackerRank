import math



def computeDiagonals(matrix):
    primarySum = 0
    secondarySum = 0
    for i in range (0,len(matrix), int(math.sqrt(len(matrix)) + 1)):
        primarySum += matrix[i]
    for i in range (int(math.sqrt(len(matrix)) * (math.sqrt(len(matrix)) - 1)), 0, -int(math.sqrt(len(matrix))-1)):
        secondarySum += matrix[i]
    return abs(primarySum - secondarySum)


def main():
    n = int(input().strip())
    matrix = []
    for i in range (n):
        temp = [int(x) for x in input().strip().split(" ")]
        matrix += temp
    print(computeDiagonals(matrix))

main()
