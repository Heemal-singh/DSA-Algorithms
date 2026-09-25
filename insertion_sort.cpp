/*
Insertion Sort = Insertion Sort is a sorting algorithm that builds the sorted
    part of an array one element at a time.

    How it works:
    1. Consider the first element as sorted.
    2. Take the next element as the key.
    3. Compare the key with elements in the sorted part.
    4. Shift larger elements one position to the right.
    5. Insert the key at its correct position.
    6. Repeat until the entire array is sorted.



*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int n = 5;
    int arr[n] = {7, 3, 8, 2, 6};

    insertionSort(arr, n);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
  Time Complexity:
  Best Case    : O(n)
  Average Case : O(n^2)
  Worst Case   : O(n^2)

  Space Complexity:
  O(1)
*/