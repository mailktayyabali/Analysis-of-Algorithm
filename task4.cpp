#include <iostream>
using namespace std;

// Function to swap two characters
void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Recursive function to generate permutations
void permute(char str[], int l, int r) {
    if (l == r) {
        for (int i = 0; i <= r; i++)
            cout << str[i];
        cout << " ";
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);          // fix one character
            permute(str, l + 1, r);       
            swap(str[l], str[i]);          
        }
    }
}

int main() {
    char word[20];
    cout << "Enter a word: ";
    cin >> word;

    int length = 0;
    while (word[length] != '\0') 
        length++;

    cout << "All permutations: ";
    permute(word, 0, length - 1);
    cout << endl;

    return 0;
}
