def bubble_sort(arr: list):
    """Function to perform bubble sort on a list of numbers.

    Args-
        arr: Python list of numbers
    Returns-
        sorted_arr: Sorted python list
    """
    for i in range(len(arr)):
        already_sorted = True
        for j in range(len(arr) - i - 1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                already_sorted = False
        if already_sorted:
            break
    return arr

test_arr = [1,4,6,8,9,10]

print(bubble_sort(test_arr))