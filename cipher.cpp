#include <iostream>
#include <string>
using namespace std;

string caesarCipher(string text, int shift, bool encrypt) {
    string result = "";
    if (!encrypt) 
        shift = 26 - (shift % 26);   // Reverse shift for decryption

    for (char c : text) {
        if (isupper(c)) {
            result += char((c - 'A' + shift) % 26 + 'A');
        }
        else if (islower(c)) {
            result += char((c - 'a' + shift) % 26 + 'a');
        }
        else {
            result += c; // Keep spaces/punctuation unchanged
        }
    }
    return result;
}

int main() {
    string text;
    int shift;
    int choice;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter shift value: ";
    cin >> shift;

    cout << "1. Encrypt\n2. Decrypt\nEnter your choice: ";
    cin >> choice;

    bool encrypt = (choice == 1);

    string output = caesarCipher(text, shift, encrypt);

    cout << "Result: " << output << endl;

    return 0;
}
