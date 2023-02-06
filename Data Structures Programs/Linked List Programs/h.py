
def myAtoi(s):
    out = ""
    for i in range(len(s)):
        if s[i].isdigit():
            out += s[i]
    print(out)

s = "54546 with words"
print(myAtoi(s))
