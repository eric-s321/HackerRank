

def printStairs(n):
    spaces = n - 1
    for i in range(n):
        poundSigns = n - spaces
        for j in range(spaces):
            print(" ", end="")
        for k in range(poundSigns):
            print("#",end="")
        print()
        spaces -= 1


def main():
    n = int(input().strip())
    printStairs(n)

main()
