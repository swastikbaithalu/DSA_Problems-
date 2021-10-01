def chartostr(arr):
    return ''.join(arr)

if __name__ == "__main__":
    T = int(input())
    arr = list(map(str,input().split()))[:T]
    print(chartostr(arr))
