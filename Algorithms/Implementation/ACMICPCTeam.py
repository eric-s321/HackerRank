





def main():
    numPeople, numTopics = [int(x) for x in input().strip().split()]
    data = []
    for i in range(numPeople):  
        data.append(int(input().strip(), 2)) # convert binary representation to decimal
                                             # to allow or'ing 
    maxVal = -1
    numMaxTeams = 0
    for i in range (numPeople):
        for j in range (i+1,numPeople):
            temp = bin(data[i] | data[j]).count("1")
            if temp > maxVal:
                maxVal = temp
                numMaxTeams = 1
            elif temp == maxVal:
                numMaxTeams += 1

#    maxVal = bin(maxVal)[2:]        #convert max decimal value to binary and get rid of leading 0b
#    maxTopics = maxVal.count("1")


    print(maxVal)
    print(numMaxTeams)
    





main()












