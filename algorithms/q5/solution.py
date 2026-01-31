def palindrome(num):
    if str(num) == str(num)[::-1]:
        return True
    return False

x = int(input("Enter the number: "))
print(palindrome(x))