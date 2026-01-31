def multiplication(num,limit):
    for i in range(1,limit+1):
        print(num*i)

num = int(input("Enter the number whose multiplication table is required: "))
limit = int(input("Enter the limit: "))
print(multiplication(num,limit))
