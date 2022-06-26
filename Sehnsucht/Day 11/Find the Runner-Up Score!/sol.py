def solve(n,arr):
    arr.sort()
    maxi=max(arr)
    for i in range(n-1,-1,-1):
        if maxi!=arr[i]:
            return arr[i]
    return
    
    
    
if __name__ == '__main__':
    n = int(input())
    arr = [int(x) for x in input().split()]
    print(solve(n,arr))
