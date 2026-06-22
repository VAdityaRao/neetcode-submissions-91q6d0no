class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();
        vector <int> con( 2*n );

        for (int i = 0; i < con.size(); i++){
            con[i] = nums[i % n];
        }
        

        return con;
    }
};