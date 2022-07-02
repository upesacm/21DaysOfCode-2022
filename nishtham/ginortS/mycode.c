def func(a):
    code = 0
    if a.isupper():
        code = 10 ** 3
    elif a.isdigit():
        code = 10 ** 6
        if ord(a) % 2 == 0:
            code = 10 ** 9
    return code + ord(a)
print(*sorted(input(), key=lambda a: (a.isdigit() - a.islower(), a in "02468", a)), sep='')

