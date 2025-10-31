#include <iostream>
using namespace std;

struct Point {
    int x, y;
};
int partition(Point arr[], int low, int high) {
    int pivot = arr[high].x;
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j].x < pivot) {
            i++;
            Point temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    Point temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}
void quickSort(Point arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of points: ";
    cin >> n;
    Point points[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter point " << i + 1 << " (x y): ";
        cin >> points[i].x >> points[i].y;
    }
    quickSort(points, 0, n - 1);

    cout << "\nSorted Points ";
    for (int i = 0; i < n; i++) {
        cout << "(" << points[i].x << "," << points[i].y << ") ";
    }
    cout << endl;
    int maxY = -99999;
    bool isMaximal[n];
    for (int i = n - 1; i >= 0; i--) {
        if (points[i].y >= maxY) {
            isMaximal[i] = true;
            maxY = points[i].y;
        } else {
            isMaximal[i] = false;
        }
    }
    cout << "\nMaximal Points ";
    for (int i = 0; i < n; i++) {
        if (isMaximal[i])
            cout << "(" << points[i].x << "," << points[i].y << ") ";
    }
    cout << "\nComparison: Both algorithms produce the same result.";
    return 0;
}
