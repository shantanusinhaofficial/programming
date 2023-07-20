  class Solution {
public:
    int uniquePaths(int m, int n) {
        int total_steps = m + n - 2;
        int choices = m - 1;  // or choices = n - 1
        return combination(total_steps, choices);
    }

private:
    int combination(int n, int r) {
        if (r > n - r) {
            r = n - r;
        }
        long long result = 1;
        for (int i = 0; i < r; i++) {
            result *= (n - i);
            result /= (i + 1);
        }
        return (int)result;
    }
};
