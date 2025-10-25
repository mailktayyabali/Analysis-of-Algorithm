#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the input: ";
    cin >> n;
    int Count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Count++;
        }
    }
    cout << "Total operations for input size " << n << ": " << Count << endl;
    return 0;
}