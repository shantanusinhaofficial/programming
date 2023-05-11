class Solution {
public:
    int maxln(vector<int>& A, vector<int>& B, int n, int m, vector<vector<int>>& dp) { 
        if (n == 0 || m == 0) {
            return 0;
        }

        if (dp[n][m] != -1) {
            return dp[n][m];
        }

        if (A[n-1] == B[m-1]) {
            return dp[n][m] = 1 + maxln(A, B, n-1, m-1, dp);
        }
        else {
            return dp[n][m] = max(maxln(A, B, n-1, m, dp), maxln(A, B, n, m-1, dp));
        }
    }

    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int m = B.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return maxln(A, B, n, m, dp);
    }
};
