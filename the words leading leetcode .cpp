class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 1, next = 1;
        int count = 1;

        while (i<n) {
            if (nums[i] == nums[i-1]) {
                if (count < 2) {
                    count++; 
                    nums[next++] = nums[i];
                }
            }
            else {
              count=1;
                nums[next++] = nums[i];
            }

            i++;
        }

        return next;
    }
};
