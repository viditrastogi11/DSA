//https://leetcode.com/problems/add-binary/
class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.length();
        int m=b.length();
        int i=0,j=0;
        int carry=0;
        string s="";
        while(i!=n||j!=m)
        {
            int k=0,l=0;
            if(i<n)
            {
                k=a[n-1-i]-'0';
                i++;
            }
            if(j<m)
            {
                l=b[m-1-j]-'0';
                j++;
            }

            int val=k^l;
            val=val^carry;
            if(carry==0)
            {
                carry=l&k;
            }
            else{
                carry=l|k;
            }
            char c='0'+val;
            s.insert(0,1,c);
        }
        if(carry==1)
        {
         s.insert(0,1,'1');
        }
        return s;
    }
};
