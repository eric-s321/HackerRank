import sys

def main():

    originalInput = input().strip()
    normalTime = [int(x) for x in originalInput.rstrip('APM').split(':')]
    militaryTime = ""
    if "PM" in originalInput:
        if normalTime[0] == 12:
            militaryTime += "12"
        else:
            militaryTime += "%.02d" % (normalTime[0] + 12)
    elif "AM" in originalInput:
        if normalTime[0] == 12:
            militaryTime += "00"
        else:
            militaryTime += "%.02d" % (normalTime[0])
    else:
        print("Did not specify AM or PM")
        sys.exit()

    militaryTime += ":%.02d:%.02d" % (normalTime[1],normalTime[2])

    print(militaryTime)
    
        



main()
       
        
