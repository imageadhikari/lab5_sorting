def partition(Array, Low, High):
    i = (Low-1)
    pivot =  Array[High]

    for j in range(Low, High):
        if Array[j] <= pivot:
            i+=1
            Array[i],Array[j]=Array[j],Array[i]
    Array[i+1],Array[High]=Array[High], Array[i+1]
    return (i+1)

def QuickSort(Arr,low,high):
    if low< high:
        part=partition(Arr,low, high)
        QuickSort(Arr,low,part-1)
        QuickSort(Arr, part+1,high)

A=[10, 3240 ,80, 199, 323, 123123, 324, 1]

print("The array before quicksort is:")
print(A)
print()

QuickSort(A,0,len(A)-1)

print("The sorted array is:")
print(A)