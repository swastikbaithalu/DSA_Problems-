def RatCountHouse(r,unit,n,arr):
    if arr is None:
        return -1
    totalfoodRequired = r*unit
    foodTillNow=0
    house=0
    
    for house in range(n):
        foodTillNow += arr[house]
        if foodTillNow > totalfoodRequired:
            break
    if totalfoodRequired > foodTillNow:
        return 0
    return house+1

if __name__ == "__main__":
    r = int(input())
    unit = int(input())
    n = int(input())
    arr = list(map(int,input().strip().split()))[:n]
    print(RatCountHouse(r,unit,n,arr))