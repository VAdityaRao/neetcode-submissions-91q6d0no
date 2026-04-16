class Solution {
public:
    void reverseString(vector<char>& s) {

        auto l = s.begin(); //left pointer
        auto r = s.end() -1; //right pointer

        while (l<r){
            
            //update the values
            char temp = *l;
            *l = *r;
            *r = temp;

            //update the pointers
            l++;
            r--;


        }
        
    }
};