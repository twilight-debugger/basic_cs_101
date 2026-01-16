def sum(n):
    count = 0
    for i in range(0,n+1):
        count += i
    return count

n = int(input("Enter the value of n"))
print(sum(n))