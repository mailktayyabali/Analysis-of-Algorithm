#include <iostream>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node *left, *right;
};

// Simple function to print codes
void printCodes(Node* root, string code) {
    if (!root)
        return;

    if (root->ch != '#')
        cout << root->ch << " : " << code << endl;

    printCodes(root->left, code + "0");
    printCodes(root->right, code + "1");
}

int main() {
    // Characters aur frequencies
    Node* A = new Node{'A', 5, NULL, NULL};
    Node* B = new Node{'B', 9, NULL, NULL};
    Node* C = new Node{'C', 12, NULL, NULL};
    Node* D = new Node{'D', 13, NULL, NULL};

    // Manual Huffman Tree
    Node* n1 = new Node{'#', A->freq + B->freq, A, B};
    Node* n2 = new Node{'#', C->freq + D->freq, C, D};
    Node* root = new Node{'#', n1->freq + n2->freq, n2, n1};

    cout << "Huffman Codes:\n";
    printCodes(root, "");

    return 0;
}