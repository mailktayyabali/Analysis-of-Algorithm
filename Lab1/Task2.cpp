#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target, int &count) {
    int left = 0, right = n - 1;
    cout << "---------------------------------------\n";
    cout << "Step Left Right Mid arr[Mid]\n";
    while (left <= right) {
        count++;
        int mid = left + (right - left) / 2;
        cout << count << " " << left << " " << right << " " << mid 
             << " " << arr[mid] << endl;
        if (arr[mid] == target) {
            cout << "---------------------------------------\n";
            cout << "Target " << target << " found at index " << mid <<endl;
            cout << "Total comparisons: " << count << endl;
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "---------------------------------------\n";
    cout << "Target " << target << " not found \n";
    cout << "Total comparisons: " << count << endl;
    return -1;
}

int main() {
    int n = 8; 
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int target;
    cout << "Enter target value to search (1 to " << n << "): ";
    cin >> target;
    int count = 0;
    int result = binarySearch(arr, n, target, count);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    cout << "Operations performed: " << count << " comparisons";
    return 0;
}
