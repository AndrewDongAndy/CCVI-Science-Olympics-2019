T = 10
for _ in range(T):
    code = input()
    s = sum(int(char) for char in code)
    if int(code[0]) >= 5 and s < 18:
        print("So cute!")
    else:
        print("Sorry")
