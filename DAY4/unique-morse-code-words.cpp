//https://leetcode.com/problems/unique-morse-code-words/submissions/
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> s{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> encodes;
        for(int i=0;i<words.size();i++)
        {
            string encode="";
             for(int j=0;j< words[i].length();j++)
             {
                 encode=encode+s[words[i][j]-'a'];
             }
            encodes.insert(encode);
        }
        return encodes.size();
    }
};
