import sys

sys.stdin = open('DATA11.txt')

for _ in range(10):
    code = input()
    s = sum(int(char) for char in code)
    if int(code[0]) >= 5 and s < 18:
        print("So cute!")
    else:
        print("Sorry")
