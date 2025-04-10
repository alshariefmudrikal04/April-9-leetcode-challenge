
class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            for (int num : nums) {
                if (num < k) return -1;
            }       
            unordered_set<int> Greater;
            for (int num : nums) {
                if (num > k) {
                    Greater.insert(num);
                }
            }
            return Greater.size();
        }
    };
    