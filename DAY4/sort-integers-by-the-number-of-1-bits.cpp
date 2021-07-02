//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/submissions/
class Solution {

public:
    static bool compare(int a,int b)
    {
       int counta=0,countb=0;
        int c=a,d=b;
        while(a)
        {
            a=a&(a-1);
            counta++;
        }
        while(b)
        {
            b=b&(b-1);
            countb++;
        }
        if(counta==countb)
        {
            return c<d;
        }
        return counta<countb;
    }

public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};
