def insertion_sort(arr: list):
    """Function to perform insertion sort on a list of numbers.

    Args-
        arr: Python list of numbers
    Returns-
        sorted_arr: Sorted python list
    """
    n = len(arr)
    for i in range(1, n):
        key_item = arr[i]
        j = i-1
        while(j >= 0):
            if(arr[j] > key_item):
                arr[j+1] = arr[j]
                j -= 1
            else:
                break
        arr[j+1] = key_item
    return arr

test_arr = [1,4,6,3,2,8,5,7]

print(insertion_sort(test_arr))
            
