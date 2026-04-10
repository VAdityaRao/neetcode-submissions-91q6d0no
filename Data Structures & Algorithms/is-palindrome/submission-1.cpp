class Solution {
public:
    bool isPalindrome(string s) {

        string proper ;
        for (int i = 0; i < s.size(); i++){
            
            if(isalnum(s[i])){            
                proper += tolower(s[i]);
            }               
            
        }

        for (int j = 0; j < proper.size()/2 ; j++){
            if(proper[j] != proper[proper.size()-1 -j]){
                return false;
            }
        }

             

        return true;
        
    }
};
