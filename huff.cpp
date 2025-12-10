#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
struct Node {
    char ch;
    int freq;
    Node *left, *right;
    Node(char c, int f) {
        ch = c;
        freq = f;
        left = right = NULL;
    }
};
struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};
void generateCodes(Node* root, string code, unordered_map<char,string> &huffmanCode) {
    if (!root) return;
    if (!root->left && !root->right) {
        huffmanCode[root->ch] = code;
     }
    generateCodes(root->left,  code + "0", huffmanCode);
    generateCodes(root->right, code + "1", huffmanCode);
}
int main() {
    string text = "Huffman coding algorithm";
    unordered_map<char, int> freq;
    for (char ch : text) {
        freq[ch]++;
    }
    priority_queue<Node*, vector<Node*>, Compare> pq;
    for (auto pair : freq) {
        pq.push(new Node(pair.first, pair.second));
    }
    while (pq.size() > 1) {
        Node *left = pq.top(); pq.pop();
        Node *right = pq.top(); pq.pop();
        Node *newNode = new Node('\0', left->freq + right->freq);
        newNode->left = left;
        newNode->right = right;
        pq.push(newNode);
    }
    Node* root = pq.top();
    unordered_map<char, string> huffmanCode;
    generateCodes(root, "", huffmanCode);
    cout << "Huffman Codes:\n";
    for (auto pair : huffmanCode) {
        cout << pair.first << " : " << pair.second << endl;
    }
    string encoded = "";
    for (char ch : text) encoded += huffmanCode[ch];
    cout << "\nOriginal text:\n" << text << endl;
    cout << "\nEncoded text:\n" << encoded << endl;
    return 0;
}
