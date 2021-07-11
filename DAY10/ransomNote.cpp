class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.length();
        int m=magazine.length();
        map<char,int> m1;
        map<char,int> n1;
        for(int i=0;i<m;i++)
        {
            m1[magazine[i]]++;
        }
         for(int i=0;i<n;i++)
        {
            n1[ransomNote[i]]++;
        }
        for(auto i:n1)
        {
            if(m1[i.first]<i.second)
            {
                return false;
            }
        }
        return true;
    }
};
