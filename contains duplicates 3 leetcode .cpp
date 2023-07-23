class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long long> window; // Using long long to avoid overflow
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (i > k) {
                window.erase(nums[i - k - 1]); // Remove the element outside the window
            }

            auto it = window.lower_bound((long long)nums[i] - t);
            if (it != window.end() && *it - nums[i] <= t) {
                return true;
            }

            window.insert(nums[i]);
        }

        return false;
    }
};
