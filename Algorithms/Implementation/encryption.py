import math

def main():
    englishString = input().strip()
    strLength = len(englishString)
    sqrtLen = math.sqrt(strLength)
    floor = math.floor(sqrtLen)
    ceil = math.ceil(sqrtLen)

    if floor == ceil:
        rows = columns = floor
    else:
        rows = floor
        columns = ceil
    
    if rows * columns < strLength and rows != columns:
        rows += 1

    begin = 0
    end = columns
    matrix = []
    for i in range(rows):
        matrix.append(englishString[begin:end])
        begin = end
        end += columns

    encryptedMsg = ''
    for index in range(columns):
        for row in matrix:
            if (len(row) - 1) >= index:
                encryptedMsg += row[index]
        encryptedMsg += ' '
    encryptedMsg = encryptedMsg.strip() #remove trailing whitespace
    print(encryptedMsg)

                






if __name__ == '__main__':
    main()
