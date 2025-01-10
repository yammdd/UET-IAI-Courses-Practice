#
#
#    ____  ____        __          ____    ____     ____    ____
#   |_  _||_  _|      /  \        |_   \  /   _|   |_   \  /   _|
#     \ \  / /       / /\ \         |   \/   |       |   \/   |
#      \ \/ /       / ____ \        | |\  /| |       | |\  /| |
#      _|  |_     _/ /    \ \_     _| |_\/_| |_     _| |_\/_| |_
#     |______|   |____|  |____|   |_____||_____|   |_____||_____|
#
#

def fibo(x):
    if x == 1: return(1)
    elif x == 2: return(2)
    else:
        c = 3
        a, b = 1, 1
        while c <= x:
            a, b = b, a+b
            c += 1
    return b
def gcd(x,y):
    while y != 0:
        x, y = y, x%y
    return x
x,y = map(int, input().split())
print(gcd(fibo(x), fibo(y)) % 1000000007)