def length_of_string(s):
    count = 0
    for x in s:
        count += 1
    return count

s = "Hello World"
print("The length of given string is:",length_of_string(s))