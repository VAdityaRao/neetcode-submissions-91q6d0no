class Solution {
public:

    bool normalPalindrome (string s) {

        int l = 0;
        int r = s.size()-1;

        while (l<r){

            if (s[l] != s[r]) return false;
            l++;
            r--;
        }

        return true;
    }
    bool validPalindrome(string s) {

        if (normalPalindrome(s) == true) return true;

        bool flag = false;

        for( int i = 0; i < s.size(); i++ ){

            char temp = s[i];
            s.erase(i, 1);
            
            if(normalPalindrome(s) == true) return true;
            
            s.insert(i, 1, temp);
            
        }

        return false;
        
    }
};