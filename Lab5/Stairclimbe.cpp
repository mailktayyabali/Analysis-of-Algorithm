#include <iostream>
using namespace std;
long long countWays(int n) {
    if (n == 0){
        return 0;
    }  
    if (n == 1){
        return 1;
    }  
    if (n == 2){
        return 2;
    } 
    long long ways[n + 1];   
    ways[0] = 0;
    ways[1] = 1;
    ways[2] = 2;
    for (int i = 3; i <= n; i++) {
        ways[i] = ways[i - 1] + ways[i - 2];
    }
    return ways[n];
}
int main() {
    int n;
    cout << "Enter number of steps (n): ";
    cin >> n;
    cout << "Number of distinct ways to reach the top: " << countWays(n) << endl;
    return 0;
}
