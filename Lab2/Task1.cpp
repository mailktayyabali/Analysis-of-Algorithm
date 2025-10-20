#include <iostream>
using namespace std;

int main() {
    int n, target, check = -1;
    int arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> target;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            check = i;
            break;
        }
    }
    if (check != -1)
        cout << "Element found at index " << check << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
