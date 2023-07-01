import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split(" ")))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())
H, W = LI()
A = [S() for _ in range(H)]
def check_neighbor(a, b) -> bool:
    """aの次bへ行けるか判定する"""
    x1, y1 = a
    x2, y2 = b
    if x2 < 0 or x2 >= H or y2 < 0 or y2 >= W:
        return False
    if A[x1][y1] == "s" and A[x2][y2] == "n":
        return True
    elif A[x1][y1] == "n" and A[x2][y2] == "u":
        return True
    elif A[x1][y1] == "u" and A[x2][y2] == "k":
        return True
    elif A[x1][y1] == "k" and A[x2][y2] == "e":
        return True
    elif A[x1][y1] == "e" and A[x2][y2] == "s":
        return True
    return False

def check_path(x, y):
    if x==H-1 and y==W-1:
        return True
    if check_neighbor((x, y), (x+1, y)):
        if check_path(x+1, y):
            return True
    elif check_neighbor((x, y), (x, y+1)):
        if check_path(x, y+1):
            return True
    elif check_neighbor((x, y), (x-1, y)):
        if check_path(x-1, y):
            return True
    elif check_neighbor((x, y), (x, y-1)):
        if check_path(x, y-1):
            return True

if check_path(0, 0):
    print("Yes")
else:
    print("No")