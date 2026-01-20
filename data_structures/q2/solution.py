def del_from_arr(arr,index):
    if(index<0 and index>len(arr)):
        return "Invalid array"
    del arr[index]
    return arr 

v = [1,2,3,4,5]
print(del_from_arr(v,3))