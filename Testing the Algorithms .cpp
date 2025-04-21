#include <iostream>
using namespace std;

// Ternary Search implementation
int ternarySearch(int arr[], int left, int right, int key) {
    if (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == key) return mid1;
        if (arr[mid2] == key) return mid2;

        if (key < arr[mid1])
            return ternarySearch(arr, left, mid1 - 1, key);
        else if (key > arr[mid2])
            return ternarySearch(arr, mid2 + 1, right, key);
        else
            return ternarySearch(arr, mid1 + 1, mid2 - 1, key);
    }
    return -1;
}

// Interpolation Search implementation
int interpolationSearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high && key >= arr[low] && key <= arr[high]) {
        if (low == high) {
            if (arr[low] == key) return low;
            return -1;
        }

        // Estimate position
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]);

        if (arr[pos] == key)
            return pos;
        if (arr[pos] < key)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1;
}

int main() 
{
    // Initialize sorted array and calculate its size
    int sortedArr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    const int size = sizeof(sortedArr) / sizeof(sortedArr[0]);
    const int key = 23;

    // Perform Ternary Search
    cout << "Searching for key: " << key << endl;
    
    int ternaryResult = ternarySearch(sortedArr, 0, size - 1, key);
    cout << "Ternary Search: ";
    ternaryResult != -1 ? cout << "Element found at index " << ternaryResult << endl
                        : cout << "Element not found\n";

    // Perform Interpolation Search
    int interpolationResult = interpolationSearch(sortedArr, size, key);
    cout << "Interpolation Search: ";
    interpolationResult != -1 ? cout << "Element found at index " << interpolationResult << endl
                              : cout << "Element not found\n";

    return 0;
}