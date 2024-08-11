def solve():
    n, m, a = map(int, input().split())
    nn = -(-n//a)
    mm = -(-m//a)
    print(nn*mm)

solve()