#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter number of items: ";
    cin >> n;

    int weight[100], value[100];
    cout << "Enter weight and value of each item:\n";
    for (int i = 0; i < n; i++) {
        cout << "Item " << i + 1 << " - Weight: ";
        cin >> weight[i];
        cout << "Item " << i + 1 << " - Value: ";
        cin >> value[i];
    }

    int W;
    cout << "Enter maximum capacity of knapsack: ";
    cin >> W;
    int dp[101][101];
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0){
                dp[i][w] = 0;
            }
            else if (weight[i - 1] <= w){
                dp[i][w] = max(dp[i - 1][w],value[i - 1] + dp[i - 1][w - weight[i - 1]]);
            }
            else{
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    cout << "\nMaximum total value in knapsack = " << dp[n][W] << endl;
    return 0;
}
