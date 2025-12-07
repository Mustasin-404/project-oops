#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int charToInt(char c) {
    return toupper(c) - 'A';
}

char intToChar(int n) {
    return (n % 26) + 'A';
}

int main() {
    string plaintext;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    // Keep only letters and convert to uppercase
    string filtered = "";
    for (char c : plaintext) {
        if (isalpha(c))
            filtered += toupper(c);
    }
    plaintext = filtered;

    // Pad with X to make length a multiple of 3
    while (plaintext.length() % 3 != 0)
        plaintext += 'X';

    // Read 3x3 key matrix
    int key[3][3];
    cout << "Enter 3x3 key matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> key[i][j];
        }
    }

    string ciphertext = "";

    // Encrypt using COLUMN-MAJOR (correct version)
    for (int i = 0; i < plaintext.length(); i += 3) {
        int p0 = charToInt(plaintext[i]);
        int p1 = charToInt(plaintext[i + 1]);
        int p2 = charToInt(plaintext[i + 2]);

        int c0 = (p0 * key[0][0] + p1 * key[1][0] + p2 * key[2][0]) % 26;
        int c1 = (p0 * key[0][1] + p1 * key[1][1] + p2 * key[2][1]) % 26;
        int c2 = (p0 * key[0][2] + p1 * key[1][2] + p2 * key[2][2]) % 26;

        ciphertext += intToChar(c0);
        ciphertext += intToChar(c1);
        ciphertext += intToChar(c2);
    }

    cout << "Ciphertext: " << ciphertext << endl;

    return 0;
}
