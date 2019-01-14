import sys

sys.stdin = open('DATA21.txt')

for _ in range(10):
    N, K = [int(s) for s in input().split()]
    posts = [int(s) for s in input().split()]
    posts.sort();
    print(sum(posts[:K]), sum(posts[N - K:]))
