


def main():
    numSticks = int(input().strip())
    sticks = [int(x) for x in input().strip().split()]
    while sticks:
        print(len(sticks))
        minVal = min(sticks)
        sticks = [x - minVal for x in sticks]
        sticks = [x for x in sticks if x != 0]

main()
