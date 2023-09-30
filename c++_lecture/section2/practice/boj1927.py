import sys
#주의
import heapq as hq

if __name__ == "__main__":

    input = sys.stdin.readline  # 빠른 입력을 위해 sys.stdin.readline을 사용합니다.
    heap = [] # 배열

    n = int(input())

    for _ in range(n):
        x = int(input().rstrip())  # 개행 문자를 제거합니다.
        if x > 0:
            hq.heappush(heap, x)
        else: # not => !
            if not heap:
                print(0)
            else:
                print(hq.heappop(heap))
    