def linearSearch(arr,target_int):
    for i in range(len(arr)-1):
        if(arr[i] == target_int):
            return True
    return False

arr = [2,34,35,1,4,5,3,22]
x = int(input("Enter the target intger: "))

print(linearSearch(arr,x))