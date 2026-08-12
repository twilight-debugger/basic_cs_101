def sum_of_digits(x):

    if(x < 0): return -1
    if(x == 0): return 0

    sum = 0

    while(x > 0):
        sum += x % 10
        x //= 10

    return sum

sample = int(input("Enter the number:"))
print("The sum of digits is:",sum_of_digits(sample))