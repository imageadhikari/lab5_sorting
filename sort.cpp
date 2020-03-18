#include<iostream>
using namespace std;
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high];
    int i = (low - 1);  
  
    for (int j = low; j <= high - 1; j++)  
    {  
          
        if (arr[j] < pivot)  
        {  
            i++;  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  

void Quicksort(int a[], int low ,int high){
    if(low<high){
        int pi=partition(a,low,high);
        Quicksort(a,low,pi-1);
        Quicksort(a,pi+1,high);
    }
}
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}
