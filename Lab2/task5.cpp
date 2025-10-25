#include <iostream>
using namespace std;
int main() {
    char str[100];
    cout << "Enter a string without spaces: ";
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\0')
            continue;
        int count = 1;
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[j] == str[i]) {
                count++;
                str[j] = '\0'; 
            }
        }
        cout << str[i] << " = " << count << endl;
    }
    return 0;
}
