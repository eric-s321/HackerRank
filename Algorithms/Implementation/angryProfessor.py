

def main():
    numTestCases = int(input().strip())
    for i in range(numTestCases):
        numStudents, threshold = [int(x) for x in input().strip().split(' ')]
        arrivalTimes = [int(x) for x in input().strip().split(' ')]
        numOnTime = 0
        for j in arrivalTimes:
            if j <= 0:
                numOnTime += 1
        if numOnTime >= threshold:
            print("NO")
        else:
            print("YES")


main()
