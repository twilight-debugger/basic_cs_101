def spaceCount(sen):
    count = 0
    for i in range (0,len(sen)):
        if(sen[i] == ' '):
            count += 1
    return count

ex_sen = input("Enter the sentence")
print(spaceCount(ex_sen))      