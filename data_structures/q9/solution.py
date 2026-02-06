def merge_array(a,b):
    i = j = 0 
    result = []

    new_a = sorted(a)
    new_b = sorted(b)

    while i < len(new_a) and j < len (new_b):
        if new_a[i] <= new_b[j]:
            result.append(new_a[i])
            i+=1
        else:
            result.append(new_b[j])
            j+=1

    result.extend(new_a[i:])
    result.extend(new_b[j:])
    return result

x = [2,3,4,5,6,7]
y = [3,2,1,4,5,6]
print(merge_array(x,y))