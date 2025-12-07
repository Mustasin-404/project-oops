#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class PlayfairCipher {
private:
    char matrix[5][5];
    string key;

    // Function to prepare the 5x5 key matrix
    void generateMatrix() {
        bool used[26] = { false };
        used['J' - 'A'] = true; // Usually I and J are combined

        string tempKey = key;
        for (char &ch : tempKey) {
            ch = toupper(ch);
            if (ch == 'J') ch = 'I';
        }

        string keyMatrix = "";
        for (char ch : tempKey) {
            if (isalpha(ch) && !used[ch - 'A']) {
                keyMatrix += ch;
                used[ch - 'A'] = true;
            }
        }

        for (char ch = 'A'; ch <= 'Z'; ++ch) {
            if (!used[ch - 'A'])
                keyMatrix += ch;
        }

        int k = 0;
        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                matrix[i][j] = keyMatrix[k++];
    }

    // Find position of letter in matrix
    void findPosition(char ch, int &row, int &col) {
        if (ch == 'J') ch = 'I';
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (matrix[i][j] == ch) {
                    row = i;
                    col = j;
                    return;
                }
            }
        }
    }

    // Prepare text by removing spaces, duplicates, etc.
    string prepareText(string text) {
        string result = "";
        for (char &ch : text) {
            if (isalpha(ch)) {
                ch = toupper(ch);
                if (ch == 'J') ch = 'I';
                result += ch;
            }
        }

        // Insert 'X' between duplicate letters in pairs
        for (size_t i = 0; i < result.length(); i += 2) {
            if (i + 1 < result.length() && result[i] == result[i + 1])
                result.insert(i + 1, "X");
        }

        // Make length even
        if (result.length() % 2 != 0)
            result += 'X';

        return result;
    }

public:
    PlayfairCipher(string key) {
        this->key = key;
        generateMatrix();
    }

    // Encrypt function
    string encrypt(string plaintext) {
        string text = prepareText(plaintext);
        string ciphertext = "";

        for (size_t i = 0; i < text.length(); i += 2) {
            char a = text[i];
            char b = text[i + 1];
            int row1, col1, row2, col2;
            findPosition(a, row1, col1);
            findPosition(b, row2, col2);

            if (row1 == row2) {
                ciphertext += matrix[row1][(col1 + 1) % 5];
                ciphertext += matrix[row2][(col2 + 1) % 5];
            } else if (col1 == col2) {
                ciphertext += matrix[(row1 + 1) % 5][col1];
                ciphertext += matrix[(row2 + 1) % 5][col2];
            } else {
                ciphertext += matrix[row1][col2];
                ciphertext += matrix[row2][col1];
            }
        }

        return ciphertext;
    }

    // Display key matrix
    void displayMatrix() {
        cout << "\nPlayfair Cipher Key Matrix:\n";
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    string key, plaintext;

    cout << "Enter key: ";
    getline(cin, key);
    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    PlayfairCipher cipher(key);
    cipher.displayMatrix();

    string encrypted = cipher.encrypt(plaintext);
    cout << "\nEncrypted Text: " << encrypted << endl;

    return 0;
}
