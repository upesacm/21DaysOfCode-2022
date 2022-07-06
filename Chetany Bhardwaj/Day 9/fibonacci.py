number = 1
def fibonacci(choice, result1, result2):
    global number
    print(result1, end=" ")
    number = number+1
    if number <= choice:
        fibonacci(choice, result2, result1+result2)
series_till = int(input("Enter the number of elements of the fibonnaci series to be printed: "))
fibonacci(series_till, 0 ,1)