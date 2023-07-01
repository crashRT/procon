import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
N = I()
AB = [LI() for _ in range(N)]

def calc_rate(data):
    return data[0]/(data[0]+data[1])

calc_rate_list = [(i, calc_rate(data)) for i, data in enumerate(AB)]
calc_rate_list.sort(key=lambda x: x[1], reverse=True)

for man in calc_rate_list:
    print(man[0]+1, end=" ")
print()