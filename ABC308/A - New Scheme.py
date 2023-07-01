import bisect,collections,copy,heapq,itertools,math,numpy,string
import sys

def S(): return sys.stdin.readline().rstrip()
N = S()
numbers = N.split(" ")
numbers = list(map(int, numbers))

def check_numbers(numbers):
    for number in numbers[:-1]:
        if number > numbers[numbers.index(number)+1]:
            return False
        if number < 100 or number > 675:
            return False
        if number % 25 != 0:
            return False
    if numbers[-1] < 100 or numbers[-1] > 675:
        return False
    if numbers[-1] % 25 != 0:
        return False
    return True

if check_numbers(numbers):
    print("Yes")
else:
    print("No")