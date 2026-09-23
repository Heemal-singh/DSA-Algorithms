/*
    Selection Sort

    What is Selection Sort?
    Selection Sort is a sorting algorithm that repeatedly finds
    the smallest element from the unsorted part of the array
    and places it at the correct position.

    How it works:
    1. Start from the first position.
    2. Find the smallest element in the unsorted part.
    3. Swap it with the element at the current position.
    4. Move to the next position.
    5. Repeat until the array is sorted.

*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int n = 8;
    int arr[n] = {6, 3, 8, 2, 7, 1, 5, 4};

    selectionSort(arr, n);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
    Time Complexity:
    Best Case    : O(n^2)
    Average Case : O(n^2)
    Worst Case   : O(n^2)

    Space Complexity:
    O(1)
*/