#include <iostream>
#include <vector>
using namespace std;

string encryptMatrix(string text, int rows) {
    int n = text.size();
    int cols = n;

    vector<vector<char>> mat(rows, vector<char>(cols, '*'));

    int k = 0;
    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
            if (k < n) mat[r][c] = text[k++];

    string cipher = "";
    for (int c = 0; c < cols; c++)
        for (int r = 0; r < rows; r++)
            if (mat[r][c] != '*') cipher += mat[r][c];

    return cipher;
}

int main() {
    string text = "HELLOWORLD";
    int rows = 3;
    cout << "Before Encryption: " << text << endl;
    cout << "After Encrypted: " << encryptMatrix(text, rows);
    cout<<endl;
    return 0;
}
