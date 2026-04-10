class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector <int> output;
        
        for( int i = 0; i < nums.size(); i++){

            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                i --;
            }
        }

        int length = nums.size();
        
        return length;
    }
};