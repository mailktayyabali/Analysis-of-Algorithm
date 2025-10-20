#include <iostream>
#include <string>
using namespace std;
int main() {
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern to search: ";
    getline(cin, pattern);

    int tlength = text.length();
    int plength = pattern.length();
    bool found = false;

    cout << "Pattern found at positions: ";
    for (int i = 0; i <= tlength - plength; i++) {
        int j;
        for ( j = 0; j < plength; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == plength) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "No occurrences found";
    }
    cout << endl;
    return 0;
}