class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector <int> output (nums.size(), 1); //initialize all the values to 1
        

        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < nums.size(); j++){
                if (j == i){
                    continue;
                }
                output[i] = output[i] * nums[j];
            }
        }

        return output;


    }
};
