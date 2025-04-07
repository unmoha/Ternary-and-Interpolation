int main() {
    int sortedArr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(sortedArr) / sizeof(sortedArr[0]);
    int key = 23;

    // Ternary Search
    int ternaryResult = ternarySearch(sortedArr, 0, size - 1, key);
    cout << "Ternary Search: ";
    if (ternaryResult != -1)
        cout << "Element found at index " << ternaryResult << endl;
    else
        cout << "Element not found\n";

    // Interpolation Search
    int interpolationResult = interpolationSearch(sortedArr, size, key);
    cout << "Interpolation Search: ";
    if (interpolationResult != -1)
        cout << "Element found at index " << interpolationResult << endl;
    else
        cout << "Element not found\n";

    return 0;
}
