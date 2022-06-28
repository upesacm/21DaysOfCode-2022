if __name__ == '__main__':
    n = int(input( ))
    arr =list(map(int, input().split()))
    maximum_element = max(arr)
    while maximum_element in arr:
        arr.remove(maximum_element)
    arr.sort()
    print(arr[-1])