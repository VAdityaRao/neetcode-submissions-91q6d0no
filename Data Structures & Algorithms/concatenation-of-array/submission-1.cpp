class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int length = nums.size();

        vector<int> output(2 * length);

        for (int i = 0; i < output.size(); i++){

            output[i] = nums[i%length];
        }

        return output;
        
    }
};