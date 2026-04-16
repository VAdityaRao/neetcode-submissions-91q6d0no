class Solution {
public:
    bool isPalindrome(string s) {

        int l = 0;
        int r = s.size()-1;

        while (l<r){

            while(l<r && !isalnum(s[l])) {
                l++; //incremeant pointers to skip space from left
            }

            while (l<r && !isalnum(s[r])) {
                r--; //increament pointers to skip space from right
            }


            if(tolower(s[l]) != tolower(s[r]) ) return false;

            //increament pointer  to the next value
            l++;
            r--;
        }

        return true;
        
    }
};