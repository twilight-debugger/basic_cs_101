def case_change(c):
    if c.islower():
        return c.upper()
    elif c.isupper():
        return c.lower()
    return c

s = "hELLO wORLD"

result = ""
for ch in s:
    result += case_change(ch)

print(result)