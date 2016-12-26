import math


def main():
    numDays = int(input().strip())
    newPeople = 5
    totalLiked = 0
    for i in range(numDays):
        totalLiked += math.floor(newPeople / 2)
        newPeople = math.floor(newPeople / 2) * 3
    print(totalLiked)

main()
    
