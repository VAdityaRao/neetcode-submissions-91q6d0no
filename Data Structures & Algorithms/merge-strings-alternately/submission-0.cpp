class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int l = 0;
        int r = 0;

        int len_word1 = word1.size();
        int len_word2 = word2.size();

        string output;

        while(l < len_word1 && r < len_word2 ){

            output += word1[l];
            output += word2[r];

            l++;
            r++;

        }

        if (len_word1 > len_word2){
            while (l < len_word1){
                output += word1[l];
                l++;
            }
        }

        else if ( len_word1 < len_word2){
             while (r < len_word2){
                output += word2[r];
                r++;
            }

        }
        

        return output;
    }
};