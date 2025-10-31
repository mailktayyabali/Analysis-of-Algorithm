#include <iostream>
using namespace std;        
struct Point {
    int x, y;
};
bool dominates(Point a, Point b) {
    return (a.x >= b.x && a.y >= b.y) && (a.x > b.x || a.y > b.y);
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
    bool isMaximal[n];
    for (int i = 0; i < n; i++)
        isMaximal[i] = true; 
    int comparisons = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            comparisons++;
            if (dominates(points[j], points[i])) {
                isMaximal[i] = false; 
                break;
            }
        }
    }
    cout << "\nMaximal Points: ";
    for (int i = 0; i < n; i++) {
        if (isMaximal[i])
            cout << "(" << points[i].x << "," << points[i].y << ") ";       
    }
    cout << "\nTotal comparisons: " << comparisons << endl;
    return 0;
}
