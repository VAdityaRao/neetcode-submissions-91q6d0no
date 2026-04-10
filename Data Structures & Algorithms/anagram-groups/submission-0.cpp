class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map <vector<int> , vector<string>> myMap;
        

        vector<vector<string>> output;

        for(int i = 0; i < strs.size(); i++){
            
            // initialize a vector int of length 26 and value 0;
            vector<int> count (26, 0); 
            for(int j = 0; j < strs[i].size(); j++){

                count[strs[i][j] - 'a'] ++;

            }

            myMap[count].push_back(strs[i]);

        }

        for (auto it = myMap.begin(); it != myMap.end(); it++){
            output.push_back(it->second);
        }

        return output;
        
    }
};
