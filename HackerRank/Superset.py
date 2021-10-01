set_A = set(map(int,input().split())) 
N = int(input())
for i in range(N):
    arr_A = set(input().split())
    arr_N = set(input().split())
    if not arr_A.issuperset(arr_N):
        print(False)
else:
    print(True)
