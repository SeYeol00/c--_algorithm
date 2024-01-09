import sys
import math as m
d = {
    "a":1,
    "b":2,
    "c":3,
    "d":4,
    "e":5,
    "f":6,
    "g":7,
    "h":8,
    "i":9,
    "j":10,
    "k":11,
    "l":12,
    "m":13,
    "n":14,
    "o":15,
    "p":16,
    "q":17,
    "r":18,
    "s":19,
    "t":20,
    "u":21,
    "v":22,
    "w":23,
    "x":24,
    "y":25,
    "z":26
}


if __name__ == "__main__":
    num = int(input())
    
    words = input()
    
    result = 0
    cnt = 0
    for x in words:
        result += d[x]*m.pow(31,cnt)
        cnt+=1
    
    print(int(result))