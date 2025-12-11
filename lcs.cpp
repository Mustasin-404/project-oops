#include <iostream>
#include <vector>
#include <string>
using namespace std;
string LCS(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    string lcs = "";
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (s1[i-1] == s2[j-1]) { 
            lcs = s1[i-1] + lcs;  // add character
            i--; 
            j--;
        }
        else if (dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }
    return lcs;
}
int main() {
    string s1 = "abcab";
    string s2 = "cbab";
    string result = LCS(s1, s2);
    cout << "LCS: " << result << endl;
    return 0;
}
