



def main():
    numClouds = int(input())
    try:
        clouds = [int(x) for x in input().strip().split()]
    except ValueError:
        print("Enter numbers you fucktard")

    i = 0
    while clouds[i] == 1:   # Skip leading thunderclouds
        i += 1
    i = 0
    jumps = 0
    while i < len(clouds):
        if i < len(clouds) - 2 and clouds[i + 2] == 0:
            i = i + 2
            jumps += 1
        elif i < len(clouds) - 1 and clouds[i + 1] == 0:
            i = i + 1
            jumps += 1
        else:
            break
    print(jumps)

        
        
         

    
    

    
main()


