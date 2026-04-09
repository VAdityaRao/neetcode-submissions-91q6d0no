class Solution {
public:

    string encode(vector<string>& strs) {

        string coded;

        for (int i = 0; i < strs.size(); i++){
            coded += to_string (strs[i].size()); //appending the length of the string as the first element of the string
            coded +='#';
            for(int j = 0; j < strs[i].size(); j++){

                coded += strs[i][j]; // adding the sting to the coded combined sting

            }
        }

        // but i think this is probably a decent way to encode the string

        for (int k = 0; k < coded.size(); k++){
            cout<< coded[k] <<endl;
        }
        return coded;

    }

    vector<string> decode(string s) {

        vector<string> decoded;

        string length_str = "";
        int i = 0;

        while (i < s.size()) {

            while( s[i] != '#') {
                length_str += s[i];
                i++;

            }

            int len = stoi(length_str);

            string word = s.substr(i+1, len);

            decoded.push_back(word);

            i = i + 1 + len;

            length_str = "";

        }

        


        
        return decoded;

    }
};
