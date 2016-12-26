

def main():
    x1,v1,x2,v2 = [int(x) for x in input().strip().split(" ")]
    if(x1 > x2 and v2 > v1):
        while(x2 <= x1):
            if x1 == x2:
                print("YES")
                return
            x1 += v1
            x2 += v2
    elif(x2 > x1 and v1 > v2):
        while(x1 <= x2):
            if x1 == x2:
                print("YES")
                return
            x1 += v1
            x2 += v2
    print("NO")

main()
