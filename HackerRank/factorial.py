from typing import runtime_checkable


def fac(num):
    factorial = 1 
    if num < 0:
        return  0
    else:
        for i in range(0,num):
            factorial = factorial * i
        return factorial

if __name__ == "__main__":
    num  = int(input())
    print(fac(num)) 