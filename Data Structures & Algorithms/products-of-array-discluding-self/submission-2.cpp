class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        
        vector <int> prefix (nums.size());
        vector <int> postfix (nums.size());
        vector <int> output (nums.size());
       

        prefix [0] = nums[0];
        postfix [nums.size() -1] = nums[nums.size()-1];
        

        for (int i = 1; i < nums.size(); i++){
            
            prefix[i] = prefix[i-1] * nums[i];
        }

        for (int j = nums.size() -2; j >= 0; j--){
            postfix [j] = postfix[j+1] * nums[j];
        }

        output[0] = postfix[1];
        output[nums.size()-1] = prefix[nums.size()-2];

        for (int k = 1; k < nums.size()-1; k++){            
            output[k] = prefix[k-1] * postfix[k+1];
        }

        return output;


    }
};
