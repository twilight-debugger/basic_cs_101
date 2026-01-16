def isEmpty(sen):
    if(len(sen) == 0):
        return "empty"
    else:
        return "not empty"
    
eg_sen = input("Enter any sentence")
print(isEmpty(eg_sen))