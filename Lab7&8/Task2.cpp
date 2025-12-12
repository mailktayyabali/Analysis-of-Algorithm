#include <iostream>
using namespace std;

struct Appointment {
    double start;
    double end;
};

int main() {
    Appointment arr[5] = {
        {9,   10},
        {9.5, 11},
        {10,  10.5},
        {12,11},
        {11,  12}
    };

    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].end < arr[minIndex].end) {
                minIndex = j;
            }
        Appointment temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
    Appointment selected[5];
    int count = 0;

    double lastEnd = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i].start >= lastEnd) {
            selected[count] = arr[i];
            count++;
            lastEnd = arr[i].end;
        }
    }

    cout << "Selected Schedule:\n";
    for (int i = 0; i < count; i++) {
        cout << "(" << selected[i].start << ", "
             << selected[i].end << ")\n";
    }

    return 0;
}
