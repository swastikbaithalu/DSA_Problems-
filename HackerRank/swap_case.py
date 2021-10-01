'''
You are given a string and your task is to swap cases. In other words, convert all lowercase letters to uppercase letters and 
vice versa.

Input Format

    HackerRank.com presents "Pythonist 2".

Sample Output 0
    hACKERrANK.COM PRESENTS "pYTHONIST 2".

'''

def swap_case(s):
    '''
     s.swapcase()

    '''
    
    result = ''
    for letter in s:
        if letter == letter.upper():
            result += letter.lower()
        else:
            result += letter.upper()
    return result
    
if __name__ == "__main__":
    s = input()
    result = swap_case(s)
    print(result)