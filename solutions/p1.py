T = 10
for _ in range(T):
    code = input()
    s = 0
    for i in code:
        s += int(i)
    if int(code[0]) >= 5 and s < 18:
        print("So cute!")
    else:
        print("Sorry")
