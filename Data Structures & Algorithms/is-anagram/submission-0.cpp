class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false; // if the string length mismatch then no point of comparing
        }
        int count[26] = {0}; //initialze an integer array to keep count of all the alphabets

        for ( int i = 0; i < s.size(); i++) {

            count[ s[i] - 'a'] ++;
            count[ t[i] - 'a'] --;
        }


        for (int i = 0; i < 26; i++){
            if (count[i] > 0){
                return false; // if there is a mismatch in the count array
            }
        }

        return true;
    }
};
