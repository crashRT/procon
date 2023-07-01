import bisect
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
N = I()
AB = [LI() for _ in range(N)]

def calc_rate(a, b):
    return b/(a+b)

calc_rate_list = []
for i in range(N):
    bisect.insort_right(calc_rate_list, (i, calc_rate(AB[i][0], AB[i][1])), key=lambda x: x[1])

print(calc_rate_list)

for man in calc_rate_list:
    print(man[0]+1, end=" ")
