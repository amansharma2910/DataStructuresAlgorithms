def quick_sort(arr: list):
    n = len(arr)
    
    if n < 2:
        return arr
    
    left, right, same = [], [], []
    pivot = arr[n//2]

    for element in arr:
        if element < pivot:
            left.append(element)
        elif element > pivot:
            right.append(element)
        else:
            same.append(element)

    return quick_sort(left) + same + quick_sort(right)

test_arr = [1,4,6,3,2,8,5,7]

print(quick_sort(test_arr))

