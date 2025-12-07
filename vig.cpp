#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to encrypt a message using Vigenere Cipher
string encryptVigenere(const string &text, const string &key) {
    string result = "";
    int keyIndex = 0;
    int keyLen = key.length();

    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char keyChar = isupper(key[keyIndex % keyLen]) ? 
                           key[keyIndex % keyLen] : 
                           toupper(key[keyIndex % keyLen]);

            result += char((c - base + (keyChar - 'A')) % 26 + base);
            keyIndex++;
        } else {
            result += c; // keep non-letters unchanged
        }
    }
    return result;
}

// Function to decrypt a Vigenere Cipher text
string decryptVigenere(const string &cipher, const string &key) {
    string result = "";
    int keyIndex = 0;
    int keyLen = key.length();

    for (char c : cipher) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char keyChar = isupper(key[keyIndex % keyLen]) ? 
                           key[keyIndex % keyLen] : 
                           toupper(key[keyIndex % keyLen]);

            result += char((c - base - (keyChar - 'A') + 26) % 26 + base);
            keyIndex++;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    string text, key;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter key: ";
    getline(cin, key);

    string encrypted = encryptVigenere(text, key);
    string decrypted = decryptVigenere(encrypted, key);

    cout << "\nEncrypted: " << encrypted << endl;
    cout << "Decrypted: " << decrypted << endl;

    return 0;
}
