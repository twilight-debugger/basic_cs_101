def bool(x):
    if(str(x)) == str(x)[::-1]:
        return True
    return False

num = int(input("Enter the number: "))
print(bool(num))