class Solution {
public:
    std::vector<int> minOperations(std::string boxes) {
        std::vector<int> dp(boxes.size(), 0);
        for (int i = 0; i < boxes.size(); i++) {
            // Left
            for (int j = 0; j <= i; j++) {
                if (boxes[j] == '1') {
                    dp[i] += std::abs(i - j);
                }
            }
            // Right
            for (int j = i; j < boxes.size(); j++) {
                if (boxes[j] == '1') {
                    dp[i] += std::abs(i - j);
                }
            }
        }
        return dp;
    }
};
