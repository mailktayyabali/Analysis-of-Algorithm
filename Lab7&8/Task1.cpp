#include <iostream>
using namespace std;

int main() {
    int target[4] = {4, 6, 7, 0}; 
    int attempts = 0;

    int guess[4] = {0, 0, 0, 0};
    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            for (int c = 0; c < 10; c++) {
                for (int d = 0; d < 10; d++) {

                    attempts++;
                    guess[0] = a;
                    guess[1] = b;
                    guess[2] = c;
                    guess[3] = d;
                    if (guess[0] == target[0] &&
                        guess[1] == target[1] &&
                        guess[2] == target[2] &&
                        guess[3] == target[3]) {

                        cout << "Found PIN: ";
                        cout << guess[0] << guess[1] << guess[2] << guess[3] << endl;

                        cout << "Attempts needed: " << attempts << endl;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
