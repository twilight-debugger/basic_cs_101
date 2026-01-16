def check(num):
    if(num>0):
        return "positive"
    elif(num<0):
        return "negative"
    else:
        return "Zero"

n = int(input("Enter the number: "))
print (check(n))