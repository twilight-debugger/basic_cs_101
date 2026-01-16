def findFirstandLast(arr):
    return arr[0], arr[-1]

n = int(input("Enter number of elements: "))
arr = []

print("Enter elements:")
for i in range(n):
    arr.append(int(input()))

first, last = findFirstandLast(arr)
print("First element =", first)
print("Last element =", last)


    
