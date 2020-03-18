#include <iostream>
#include <algorithm>
#include "sort.cpp"

int binarysearch(int arr[], int left, int right, int element)
{
    int mid;
    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == element)
            return mid;
        if (arr[mid] > element)
            return binarysearch(arr, left, mid - 1, element);
        return binarysearch(arr, mid + 1, right, element);
    }
    return -1;
}

int main()
{
    int arr[10] = {18, 25, 63, 42, 11, 89, 63, 28, 37, 82};
    int element;
    Quicksort(arr, 0, 9);
    std::cout << "Enter the element you want to search?" << std::endl;
    std::cin >> element;
    if (binarysearch(arr, 0, 9, element) == -1)
    {
        std::cout << "Element not found " << std::endl;
    }
    else
    {
        std::cout << "Element found " << std::endl;
    }
    printArray(arr, 10);
}
