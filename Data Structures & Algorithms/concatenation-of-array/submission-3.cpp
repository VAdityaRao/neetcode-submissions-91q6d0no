class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();
        vector<int> con(2 * n);

        for (int i = 0; i < n; i++) {
            con[i] = nums[i];
            con[i + n] = nums[i];
        }

        return con;
    }
};