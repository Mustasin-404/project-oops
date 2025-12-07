#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to encrypt using Rail Fence Cipher
string encryptRailFence(const string &text, int key) {
    if (key <= 1) return text;

    // Remove spaces and convert to uppercase
    string cleaned = "";
    for (char c : text)
        if (c != ' ') cleaned += toupper(c);

    vector<string> rail(key);
    int row = 0;
    bool down = true;

    // Build zigzag pattern
    for (char c : cleaned) {
        rail[row] += c;

        if (row == 0)
            down = true;
        else if (row == key - 1)
            down = false;

        row += down ? 1 : -1;
    }

    // Combine rails
    string cipher;
    for (auto &r : rail)
        cipher += r;

    return cipher;
}

// Function to decrypt Rail Fence Cipher
string decryptRailFence(const string &cipher, int key) {
    if (key <= 1) return cipher;

    int len = cipher.length();
    vector<vector<char>> rail(key, vector<char>(len, '\n'));

    // Mark the zigzag pattern
    bool down = true;
    int row = 0;
    for (int i = 0; i < len; i++) {
        rail[row][i] = '*';

        if (row == 0)
            down = true;
        else if (row == key - 1)
            down = false;

        row += down ? 1 : -1;
    }

    // Fill cipher characters
    int index = 0;
    for (int i = 0; i < key; i++)
        for (int j = 0; j < len; j++)
            if (rail[i][j] == '*' && index < len)
                rail[i][j] = cipher[index++];

    // Read the message in zigzag
    string result;
    row = 0;
    down = true;
    for (int i = 0; i < len; i++) {
        result += rail[row][i];

        if (row == 0)
            down = true;
        else if (row == key - 1)
            down = false;

        row += down ? 1 : -1;
    }

    return result;
}

int main() {
    string text;
    int key;

    cout << "Enter plain text: ";
    getline(cin, text);

    cout << "Enter depth (number of rails): ";
    cin >> key;

    string cipher = encryptRailFence(text, key);
    cout << "\nCipher Text: " << cipher << endl;

    string decrypted = decryptRailFence(cipher, key);
    cout << "Decrypted Text: " << decrypted << endl;

    return 0;
}
