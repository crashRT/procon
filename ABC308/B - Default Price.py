import sys
def LI(): return list(map(int,sys.stdin.readline().rstrip().split(" ")))
def LS(): return list(sys.stdin.readline().rstrip().split(" "))

N, M = LI()
C = LS()
D = LS()
tmp_P = LI()
P0 = tmp_P[0]
P = tmp_P[1:]

price_dict = {}

for i in range(M):
    price_dict[D[i]] = P[i]

price = 0
for color in C:
    if color in price_dict:
        price += price_dict[color]
    else:
        price += P0

print(price)