

#based off algorithm at: https://www.nayuki.io/page/next-lexicographical-permutation-algorithm


def nextLexWord(word):
    i = len(word) - 1  #start at very end of word
    while i > 0 and word[i-1] >= word[i]:
        i -= 1

    if i <= 0:  #The string is already in its greatest lexicographical order
        return ''

    i -= 1
    j = len(word) - 1
    while j > i and word[j] <= word[i]:
        j -= 1

    temp = word[:i] + word[j] + word[i+1:j] + word[i] + word[j+1:] #swap word[i] and word[j]
    return temp[:i+1] + temp[len(temp)-1:i:-1]


def main():
    testCases = int(input().strip())
    for i in range(testCases):
        word = input().strip()
        nextWord = nextLexWord(word)
        if nextWord == '':
            print('no answer')
        else:
            print(nextWord)


if __name__ == '__main__':
    main()
