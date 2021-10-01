def foo(strArr):
    if strArr[0].find(strArr[1]):
        return "Yes"
    return "NO"


if __name__ == "__main__":
    strArr = str(input())
    print(foo(strArr))
