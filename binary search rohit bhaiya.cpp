#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid to prevent overflow
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main() {
    int arr[100];
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";   
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    int index = BinarySearch(arr, n, key);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}

