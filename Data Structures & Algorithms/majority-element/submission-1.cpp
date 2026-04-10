class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map <int, int> myMap;

        for (int i = 0; i < nums.size(); i++) {
            myMap[nums[i]] ++;
        }

        int max_no = 0;
        int max_freq = 0;
        for (auto it = myMap.begin(); it != myMap.end(); it ++){
            
            int curr_freq = it->second;

            if(curr_freq > max_freq ){
                max_freq = curr_freq;
                max_no = it->first;
            }
        }

        return max_no;
        
    }
};