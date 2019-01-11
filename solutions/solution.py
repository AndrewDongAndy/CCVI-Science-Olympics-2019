T = 10
for _ in range(T):
    code = input()
    cnt = 0
    for i in code:
        cnt = max(cnt, code.count(i))
    if int(code[0]) > 4 and cnt > 1:
        print("So cute!")
    else:
        print("Sorry")
