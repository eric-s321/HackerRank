


def getCount(board, i):
    letter = board[i]
    count = 0
    while board[i] == letter:
        count += 1
        i += 1
        if i >= len(board):
            break
    return count, i
    

def main():
    numGames = int(input().strip())
    finalOutput = ""
    for games in range (numGames):
        boardLength = int(input().strip())
        board = [letter for letter in input().strip()]
        ladyBugsHappy = True
        if '_' in board:
            for ladyBug in board:
                if ladyBug != '_' and board.count(ladyBug) == 1:
                    ladyBugsHappy = False
                    break
                    
        else:
            i = 0
            while i < boardLength:
                if board[i] == '_':
                    i += 1
                    continue
                count, i = getCount(board, i) 
                if count == 1:
                    ladyBugsHappy = False
                    break
        if ladyBugsHappy:
#            print("YES")
            finalOutput += "YES\n"
        else:
            finalOutput += "NO\n"
#            print("NO")
    print(finalOutput)
        

main()
