def palindrome_string(s):
    v = s[::-1]
    if(v != s):
        return False
    else:
        return True

s = "Malayalam"
print("Checking if the string is palindrome or not:",palindrome_string(s))
