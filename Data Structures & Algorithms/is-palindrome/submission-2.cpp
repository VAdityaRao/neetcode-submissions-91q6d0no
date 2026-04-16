class Solution {
public:
    bool isPalindrome(string s) {

        string proper ;
        for (int i = 0; i < s.size(); i++){
            
            if(isalnum(s[i])){            
                proper += tolower(s[i]);
            }               
            
        }

        auto l = proper.begin();
        auto r = proper.end()-1;

        while(l<r){
            
            //check if the values are the same on each end
            if(*l != *r) return false;

            //update the pointers
            l++;
            r--;

        }


        return true;
        
    }
};
