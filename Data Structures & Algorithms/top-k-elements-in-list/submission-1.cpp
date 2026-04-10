class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map <int, int> myMap; //hash map with number as index/key and freq as value
        vector<vector<int>> freq (nums.size() + 1); 

        for (int i = 0; i < nums.size(); i++){
            myMap[nums[i]] ++; // increasing the freq by 1 once the element is seen
        }

        for (auto it = myMap.begin(); it != myMap.end(); it ++) {

            int number = it-> first;
            int frequency = it -> second;

            freq[frequency].push_back(number); 

        }

        vector<int> result;

        for (int j = freq.size() -1; j > 0; j-- ){

            for (int num: freq[j]){
                result.push_back(num);
                if(result.size() == k){
                    return result;
                }
            }
        }

        return {};
        
    }
};
