//class Solution {
public:
    bool isValid(string s) {
        string p="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                p.push_back(s[i]);
            }
            else{
                char b=p.back();
                if(b=='('&&s[i]==')'||b=='['&&s[i]==']'||b=='{'&&s[i]=='}')
                {
                    p.pop_back();
                }
                else{
                    return false;
                }
            }
        }
        if(p.empty())
        {
            return true;
        }
        else{
            return false;
        }
    }
};https://leetcode.com/problems/valid-parentheses/
