//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
class Solution {
public:
   static bool compare( pair<int,int> p, pair<int,int> q)
    {
       if(p.second==q.second)
       {
          return p.first<q.first;
       }
        return p.second<q.second;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector <pair<int,int>> m;
        for(int i=0;i<mat.size();i++)
        {
            pair<int,int> p;
             sort(mat[i].begin(),mat[i].end());
            p.first=i;
            p.second=upper_bound(mat[i].begin(),mat[i].end(),0)-mat[i].begin();
            p.second=mat[i].size()-p.second;
            m.push_back(p);
        }

        sort(m.begin(),m.end(),compare);
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(m[i].first);
        }
        return ans;

    }
};
