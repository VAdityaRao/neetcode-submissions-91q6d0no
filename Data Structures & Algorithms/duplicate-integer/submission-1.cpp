class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int, int> myMap; 

        for (int i = 0; i < nums.size(); i++){
            if (myMap.contains(nums[i])){
                return true;
            }

            else 
            myMap[nums[i]] = i;
        }

        return false;
        
    }
};